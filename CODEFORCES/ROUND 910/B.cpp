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
    for (auto &it : arr)
    {
        cin >> it;
    }

    ll ans = 0;
    ll prev = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > prev)
        {
            ll div = (arr[i] + prev - 1) / prev; 
            ans += div - 1;                      
            prev = arr[i] / div;                 
        }
        else
        {
            prev = arr[i];
        }
    }
    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
