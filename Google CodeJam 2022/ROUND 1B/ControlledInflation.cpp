#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

long long mod(long long x)
{
    if (x > 0)
    {
        return x;
    }
    else
    {
        return -1 * x;
    }
}

bool comp1(long long x1, long long x2)
{
    return x1 < x2;
}
bool comp2(long long x1, long long x2)
{
    return x1 > x2;
}
long long minSum = LLONG_MAX;
void rec(long long **mat, long long N, long long P, long long i)
{
    if (i == N)
    {

        long long sum = mat[0][0];
        for (long long i = 0; i < N; i++)
        {
            for (long long j = 0; j < P - 1; j++)
            {
                sum += mod(mat[i][j + 1] - mat[i][j]);
            }
            if (i != (N - 1))
            {
                sum += mod(mat[i + 1][0] - mat[i][P - 1]);
            }
        }
        if (sum < minSum)
        {
            minSum = sum;
        }
    }
    else
    {
        sort(mat[i], mat[i] + P, comp1);
        rec(mat, N, P, i + 1);

        sort(mat[i], mat[i] + P, comp2);
        rec(mat, N, P, i + 1);
    }
}

int main()
{

    long long T;
    cin >> T;

    int t = 1;
    while (T--)
    {
        long long N, P;
        cin >> N >> P;

        long long **mat = new long long[N];

        for (long long i = 0; i < N; i++)
        {
            mat[i] = new long long[P];
            for (long long j = 0; j < P; j++)
            {
                cin >> mat[i][j];
            }
        }

        minSum = LLONG_MAX;
        rec(mat, N, P, 0);
        cout << "Case #" << t << ": " << minSum << endl;
        t++;
    }
    return 0;
}