#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n;
        p = n - 1;
        while (!isprime(p))
        {
            --p;
        }
        if (n % 2 == 0)
        {
            cout << (n * p) / 2 << "\n";
        }
        else
        {
            cout << (((n - 1) * p) / 2) + 1 << "\n";
        }
    }
    return 0;
}