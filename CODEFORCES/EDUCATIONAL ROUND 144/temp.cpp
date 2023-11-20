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
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        count = __gcd(count, arr[i]);
    }
    cout << arr[n - 1] / count + (arr[0] == 0) << "\n";
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