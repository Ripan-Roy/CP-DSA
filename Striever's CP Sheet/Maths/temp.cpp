#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    float n;
    cin >> n;
    int num = int(n);
    float rem = n - num;
    if (rem == 0)
    {
        cout << "int " << num;
    }
    else
    {
        cout << "float " << num << " " << rem;
    }
}

int main()
{
    fastIO();
    helper();
    return 0;
}