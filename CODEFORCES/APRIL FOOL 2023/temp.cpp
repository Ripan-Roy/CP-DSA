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

void helper()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    ll target = arr[k - 1];
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] >= target && arr[i] > 0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastIO;
    helper();
    return 0;
}