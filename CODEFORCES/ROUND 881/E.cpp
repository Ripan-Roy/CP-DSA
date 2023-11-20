#include <bits/stdc++.h>
#define ll long long 
#define ld long double
using namespace std;

void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> segments;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        segments.push_back({l, r});
    }
    ll q;
    cin >> q;
    vector<ll> order(q);
    for (ll i = 0; i < q; i++)
    {
        cin >> order[i];
        order[i]--;
    }
    ll left = 0, right = q + 1;
    while (right - left > 1)
    {
        ll mid = (left + right) / 2;
        vector<ll> current(n);
        for (ll i = 0; i < mid; i++)
        {
            current[order[i]] = 1;
        }
        vector<ll> prefix_sum(n + 1);
        for (ll i = 0; i < n; i++)
        {
            prefix_sum[i + 1] = prefix_sum[i] + current[i];
        }
        bool ok = false;
        for (auto seg : segments)
        {
            if (prefix_sum[seg.second] - prefix_sum[seg.first] > (seg.second - seg.first) / 2)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    if (right == q + 1)
    {
        right = -1;
    }
    cout << right << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
