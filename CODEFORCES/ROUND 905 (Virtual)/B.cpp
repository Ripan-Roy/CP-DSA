#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll ans = k, even = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
        }
        if (x % k == 0)
        {
            ans = 0;
        }
        ans = min(ans, k - x % k);
    }
    if (k == 4)
    {
        if (even >= 2)
        {
            ans = 0;
        }
        else if (even == 1)
        {
            ans = min(ans, (ll)1);
        }
        else
        {
            ans = min(ans, (ll)2);
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}