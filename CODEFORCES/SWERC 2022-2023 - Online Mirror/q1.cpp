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
    vector<ll> arr1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    vector<ll> arr2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr2[i] == arr1[0])
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
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