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
        ll n, x, m;
        cin >> n >> m >> x;
        // vector<ll> arr(n);
        ll sum = n * x;
        ll rem = x + 1;
        if (rem > m)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << sum/rem << "\n";
        }
    }

    return 0;
}