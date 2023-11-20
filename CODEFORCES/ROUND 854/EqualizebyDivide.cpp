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
    vector<ll> arr(n);
    ll countOne = 0;
    ll mini = INT_MAX;
    ll idx = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            countOne++;
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
            idx = i;
        }
    }
    if (countOne > 0 && countOne < n)
    {
        cout << -1 << "\n";
        return;
    }
    ll var = 1;
    vector<pair<ll, ll>> ans;
    while (var <= 30 * n)
    {
        ll count = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mini)
            {
                count++;
            }
            else
            {
                if (arr[i] % mini == 0)
                {
                    arr[i] = arr[i] / mini;
                }
                else
                {
                    arr[i] = arr[i] / mini + 1;
                }
                ans.push_back({i + 1, idx + 1});
                if (arr[i] < mini)
                {
                    mini = arr[i];
                    idx = i;
                }
                break;
            }
            if (count == n)
                break;
        }
        var++;
    }
    cout << ans.size() << "\n";
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << "\n";
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