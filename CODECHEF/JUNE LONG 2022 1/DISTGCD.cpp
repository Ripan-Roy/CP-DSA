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
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        for (int i = 1; i * i <= abs(a - b); i++)
        {
            if (abs(a - b) % i == 0)
            {
                if (abs(a - b) / i == i)
                {
                    ans++;
                }
                else
                {
                    ans = ans + 2;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}