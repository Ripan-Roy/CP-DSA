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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans = ans ^ arr[i];
    }
    if (ans == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
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