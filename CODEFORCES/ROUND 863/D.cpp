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

bool rec(ll x, ll y, ll n, vector<ll> &arr)
{
    if (n == 1)
    {
        return true;
    }
    if ((arr[n + 1] - arr[n]) < min(y, arr[n + 1] - y + 1))
    {
        return false;
    }
    y = min((arr[n + 1] - y + 1), y);
    return rec(y, x, n - 1, arr);
}

void helper()
{
    vector<ll> arr = {1, 1};
    for (int i = 0; i < 45; i++)
    {
        arr.push_back(arr[i] + arr[i + 1]);
    }
    ll n, x, y;
    cin >> n >> x >> y;
    if (rec(x, y, n, arr))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
