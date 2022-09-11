#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << n - 1 << " ";
        if (n <= 4)
        {
            for (ll i = 1; i <= n - 2; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << n - 2 << " ";
            for (ll i = 1; i <= n - 4; i++)
            {
                cout << i << " ";
            }
            cout << n - 3 << " ";
        }
        cout << n << "\n";
    }
    return 0;
}