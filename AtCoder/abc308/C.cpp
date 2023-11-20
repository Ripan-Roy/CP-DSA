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
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    vector<pair<ll, ld>> prob;
    for (ll i = 0; i < n; i++)
    {
        prob.push_back({i + 1, (ld)(arr[i].first) / (arr[i].first + arr[i].second)});
    }
    sort(prob.begin(), prob.end(), [](pair<ll, ld> a, pair<ll, ld> b)
         { return a.second > b.second; });
    for (ll i = 0; i < n; i++)
    {
        cout << prob[i].first << " ";
    }
}

int main()
{
    fastIO();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
