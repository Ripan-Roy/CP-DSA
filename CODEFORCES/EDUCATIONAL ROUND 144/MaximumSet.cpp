#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 998244353
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll l, r;
    cin >> l >> r;
    ll mxCount = 1;
    ll curr = l;
    ll count = 0;
    while (curr <= r)
    {
        count++;
        curr = curr * 2;
    }
    ll ans = 0;
    count--;
    ll multiple = 1ll << count;
    ll low = l;
    ll high = r;
    ll till = -1;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (mid * multiple <= r)
        {
            till = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (till != -1)
    {
        (ans += (till - l + 1)) % mod;
    }
    multiple = multiple / 2;
    multiple = multiple * 3;
    till = -1;
    low = l;
    high = r;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (mid * multiple <= r)
        {
            till = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (till != -1)
    {
        (ans += (till - l + 1) % mod * count % mod) % mod;
    }

    cout << count + 1 << " " << ans << "\n";
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