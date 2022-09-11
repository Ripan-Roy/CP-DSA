#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> n >> x;
        if (n % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}