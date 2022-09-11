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
        ll n;
        cin >> n;
        n = n * 50;
        ll a = (n * 20) / 100;
        ll b = (n * 20) / 100;
        ll c = (n * 30) / 100;
        ll ans = a + b + c;
        cout << abs(ans - n) << "\n";
    }
    return 0;
}