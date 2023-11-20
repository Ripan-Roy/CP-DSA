#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll sum(ll n)
{
  return (ll)(n * (n  + 1) / 2);
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        --n;
        ll a = n / 3;
        ll b = n / 5;
        ll c = n / 15;
        ll ans =  (ll)3 * sum(a) + (ll)5 * sum(b) - (ll)(15 * sum(c));
        cout << ans << endl;
    }
    return 0;
}
