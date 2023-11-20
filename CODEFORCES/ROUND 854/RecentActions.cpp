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
    ll m, n;
    cin >> n >> m;
    vector<ll> arr(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    ll maxVal = n;
    vector<ll> ans(n, -1);
    set<ll> pos;
    for (int i = 0; i < m; i++)
    {
        ll x = arr[i];
        if (maxVal == 0)
        {
            break;
        }
        auto it = pos.find(x);
        if (it == pos.end())
        {
            ans[maxVal - 1] = i + 1;
            maxVal--;
            pos.insert(x);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";
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