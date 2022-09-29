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
    vector<ll> arr;
    ll even = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
    }
    if (even == n)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << even << "\n";
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