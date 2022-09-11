#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> arr(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<ll> a(arr[0].begin(), arr[0].end());
        vector<ll> b(arr[1].begin(), arr[1].end());
        sort(a.begin(), a.end());
        


        
    }

    return 0;
}