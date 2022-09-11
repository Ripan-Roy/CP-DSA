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
        ll n, x;
        cin >> n >> x;
        ll temp = n / 6;
        ll ans;
        if (temp * 6 == n)
        {
            ans = temp;
        }
        else
        {
            ans = temp + 1;
        }
        ans = ans * x;
        cout << ans << "\n";
    }
    return 0;
}