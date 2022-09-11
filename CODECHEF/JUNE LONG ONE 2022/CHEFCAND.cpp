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
        ll n, x;
        cin >> n >> x;
        if (n <= x)
        {
            cout << 0 << "\n";
        }
        else
        {
            ll rem = n - x;
            if (rem % 4 == 0)
            {
                cout << rem / 4 << "\n";
            }
            else
            {
                cout << (rem / 4) + 1 << "\n";
            }
        }
    }
    return 0;
}