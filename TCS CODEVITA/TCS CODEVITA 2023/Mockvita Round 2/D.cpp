#include <bits/stdc++.h>
using namespace std;

void tab(int n, vector<int> &nums, unordered_set<int> &st, int totalSum)
{
    vector<int> dp(totalSum + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = totalSum; j >= nums[i - 1]; --j)
        {
            dp[j] = dp[j] || dp[j - nums[i - 1]];
        }
    }
    for (int j = 0; j <= totalSum; ++j)
    {
        if (dp[j])
        {
            st.insert(j);
        }
    }
}

int main()
{
    int m1, m2;
    cin >> m1 >> m2;
    int n;
    cin >> n;
    vector<int> arr(n);
    int totalSum = 0;
    for (auto &it : arr)
    {
        cin >> it;
        totalSum += it;
    }
    unordered_set<int> st;
    vector<int> dp(n + 1, -1);

    tab(n, arr, st, totalSum);

    int ans = INT_MAX;

    for (auto it : st)
    {
        int left = totalSum - it;
        ans = min(ans, max(left * m1, it * m2));
    }
    cout << ans;
    return 0;
}

// min(sum1 * m1 +  sum2 * m2)