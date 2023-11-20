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
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > n)
        {
            ans += c;
        }
    }
    map<ll, ll> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
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