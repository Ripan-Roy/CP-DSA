#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        ll tt = n;
        while (tt--)
        {
            ans = (ans * 4);
        }
        ans = ans - (((1 << n) - 1) * 3);
        cout << (ans - 1) << "\n";
    }
    return 0;
}