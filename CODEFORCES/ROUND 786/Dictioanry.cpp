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
        string str;
        cin >> str;
        ll x = (ll)str[0] - 96;
        ll y = (ll)str[1] - 96;
        ll ans;
        if (y > x)
        {
            ans = 26 * (x - 1) + y - x;
        }
        else
        {
            ans = 26 * (x - 1) + y - x + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}