#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll MOD = 1e9 + 7;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

int main()
{
    string good, name;

    cin >> good >> name;

    int n = good.size();
    int m = name.size();

    set<char> good_strings;
    for (int i = 0; i < n; i++)
    {
        good_strings.insert(good[i]);
    }

    ll ans = 0;

    char prev = good[0];

    for (int i = 0; i < m; i++)
    {
        char ch = name[i];
        if (good_strings.find(ch) != good_strings.end())
            continue;

        map<int, vector<char>> mp;
        for (int j = 0; j < n; j++)
        {
            int diff = abs(ch - good[j]);
            mp[diff].push_back(good[j]);
        }

        auto it = mp.begin();
        if (it->second.size() > 1)
        {
            auto v = it->second;
            char next_prev;
            int dist = INT_MAX;

            for (auto curr : v)
            {
                if (dist > abs(static_cast<int>(curr) - static_cast<int>(prev)))
                {
                    dist = abs(static_cast<int>(curr) - static_cast<int>(prev));
                    next_prev = curr;
                }
            }
            ans += abs(next_prev - prev);
            prev = next_prev;
        }
        else
        {
            prev = it->second[0];
            ans += abs(static_cast<int>(ch) - static_cast<int>(prev));
        }
    }
    cout << ans;

    return 0;
}
