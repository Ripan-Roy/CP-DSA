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
        ll a, b, n;
        cin >> a >> b >> n;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        ll XOR = a ^ b;
        ll ans;
        if (XOR >= n)
        {
            ll b = log2(XOR);
            ans = pow(2, b);
            if (ans < n)
            {
                cout << 2 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            cout << 1 << "\n";
        }
    }
    return 0;
}