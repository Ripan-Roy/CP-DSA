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
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans ^= arr[i];
        }
        cout << ans << "\n";
    }
    return 0;
}