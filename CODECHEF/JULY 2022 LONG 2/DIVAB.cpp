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
        ll a, b, n;
        cin >> a >> b >> n;
        ll ans = n;
        if (a % b == 0)
        {
            ans = -1;
        }
        else
        {
            if (ans % a != 0)
            {
                ans = n + a - (ans % a);
            }
            while (!((ans % a == 0) && (ans % b != 0)))
            {
                ans += a;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}