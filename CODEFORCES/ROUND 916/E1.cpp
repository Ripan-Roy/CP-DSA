#include <bits/stdc++.h>
using namespace std;

void checkFourIndicesExistence(const vector<int> &arr)
{
    int n = arr.size();
    vector<long long> prefixSum(n + 1, 0);
    unordered_map<long long, vector<pair<int, int>>> mpp;

    for (int i = 1; i <= n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            long long curSum = prefixSum[j + 1] - prefixSum[i];

            if (mpp.find(curSum) != mpp.end())
            {
                for (auto &pair : mpp[curSum])
                {
                    if (pair.second < i)
                    {
                        cout << "NO" << "\n";
                        return;
                    }
                }
            }

            if (mpp.find(curSum) == mpp.end())
            {
                mpp[curSum] = {};
            }

            mpp[curSum].push_back({i, j});
        }
    }

    cout << "YES" << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        checkFourIndicesExistence(arr);
    }

    return 0;
}
