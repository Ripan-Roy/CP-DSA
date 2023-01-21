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
bool pairity(ll a, ll b)
{
    return a % 2 == b % 2;
}

void helper()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (pairity(arr[i], arr[i + 1]))
        {
            ans++;
        }
    }
    cout << ans << "\n";
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