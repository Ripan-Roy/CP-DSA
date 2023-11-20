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
    ll n, m;
    cin >> n >> m;
    if (m > n)
    {
        cout << "NO\n";
        return;
    }
    if (n == m)
    {
        cout << "YES\n";
        return;
    }
    bool flag = false;
    ll count = 0;
    while (n > 0)
    {
        ll temp = 1;
        if (n % 3)
        {
            break;
        }
        count++;
        n /= 3;
        for (ll i = 0; i <= count; i++)
        {
            if (n * temp > m)
            {
                break;
            }
            if (n * temp == m)
            {
                flag = true;
                break;
            }
            temp = temp * 2;
        }
        if (flag)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}