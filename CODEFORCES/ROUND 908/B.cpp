#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isPossible(unordered_map<int, int> &mp)
{
    if (mp.size() == 1)
        return false;

    int cnt = 0;
    for (auto i : mp)
    {
        if (i.second > 1)
            cnt++;
    }

    return cnt >= 2;
}

vector<int> findPair(unordered_map<int, int> &mp)
{
    vector<int> pairs;
    for (auto i : mp)
    {
        if (i.second > 1)
            pairs.push_back(i.first);

        if (pairs.size() == 2)
            return pairs;
    }
    return pairs;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (!isPossible(mp))
            cout << -1 << "\n";

        else
        {
            vector<int> ans(n, 1);

            auto p = findPair(mp);
            int num1 = p[0];
            int num2 = p[1];

            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] == num1)
                {
                    ans[i] = 2;
                    break;
                }
            }

            for (int i = n - 1; i >= 0; i--)
            {
                if (arr[i] == num2)
                {
                    ans[i] = 3;
                    break;
                }
            }
            for (auto i : ans)
                cout << i << " ";

            cout << "\n";
        }
    }
    return 0;
}