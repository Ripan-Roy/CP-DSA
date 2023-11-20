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
    ll n;
    cin >> n;
    vector<vector<ll>> arr(1500, vector<ll>(1500));
    vector<ll> ans(2000007);
    ll curr = 1;
    for (ll i = 1; i < 1500; i++)
    {
        for (ll j = i - 1; j >= 1; j--)
        {
            arr[j][i - j] = arr[j - 1][i - j] + arr[j][i - j - 1] - arr[j - 1][i - j - 1] + curr * curr;
            ans[curr] = arr[j][i - j];
            curr++;
        }
    }
    cout << ans[n] << "\n";
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