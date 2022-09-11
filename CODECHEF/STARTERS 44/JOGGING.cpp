#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007LL
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll> arr;
    arr.push_back(1);
    for (ll i = 0; i < 100000; i++)
    {
        ll temp = arr[arr.size() - 1] * 2;
        temp = temp % mod;
        arr.push_back(temp);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        cout << (arr[n - 1] * x) % mod << "\n";
    }
    return 0;
}