#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 1000000007
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll count_beauty(ll n)
{
    ll ans = ((n % MOD) * ((n - 1) % MOD)) % MOD;
    return ans;
}
ll fact(ll n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = ((ans % MOD) * i) % MOD;
    }
    return ans;
}

void helper()
{
    ll n;
    cin >> n;
    cout << ((count_beauty(n) % MOD) * (fact(n) % MOD)) % MOD << "\n";
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