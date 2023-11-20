#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll MOD = 1e9 + 7;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;

        for (ll i = 2; i <= n; i++)
        {
            ll k = i;

            if (n % k == 0)
            {
                ll maxi = 0, mini = 1e18;
                ll j = 0;
                while (j < n)
                {
                    int size = n / k;
                    ll sum = 0;
                    while (size--)
                    {
                        sum += arr[j];
                        j++;
                    }
                    maxi = max(maxi, sum);
                    mini = min(mini, sum);
                }
                ans = max(ans, maxi - mini);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}