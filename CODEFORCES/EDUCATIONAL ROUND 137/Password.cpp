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
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(auto it : arr)
    {
        mp[it]++;
    }
    ll count = 10 - n;
    cout << 3 * count * (count - 1) << "\n";
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