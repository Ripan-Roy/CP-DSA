#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    double sum = 1.00000;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum -= 1.0 / factorial(i);
        }
        else
        {
            sum += 1.0 / factorial(i);
        }
    }
    cout << fixed << setprecision(5) << sum << endl;
    return 0;
}