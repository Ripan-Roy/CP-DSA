#include <bits/stdc++.h>
using namespace std;

// Hash function for vectors
struct VectorHash
{
    size_t operator()(const std::vector<int> &v) const
    {
        std::hash<int> hasher;
        size_t result = 0;
        for (int value : v)
        {
            result ^= hasher(value) + 0x9e3779b9 + (result << 6) + (result >> 2);
        }
        return result;
    }
};

// Equality operator for vectors
struct VectorEqual
{
    bool operator()(const std::vector<int> &a, const std::vector<int> &b) const
    {
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }
};

vector<vector<int>> findCombinations(vector<int> &arr, int target)
{
    vector<vector<vector<int>>> dp(target + 1);
    dp[0] = {{}};
    for (int &i : arr)
    {
        for (int j = i; j <= target; j++)
        {
            for (auto v : dp[j - i])
            {
                v.push_back(i);
                dp[j].push_back(v);
            }
        }
    }
    return dp[target];
}

int main()
{
    int target = 13;
    vector<int> arr = {2, 7, 3, 4, 9};

    // int target = 19;
    // vector<int> arr = {2, 4, 6, 8, 10};

    // Use custom hash and equality functions for vector<int>
    unordered_map<vector<int>, int, VectorHash, VectorEqual> frequencyMap;

    vector<vector<int>> combinations = findCombinations(arr, target);

    // Count frequencies of each combination
    for (const auto &combination : combinations)
    {
        frequencyMap[combination]++;
    }

    // Sort combinations based on frequency and heights
    sort(combinations.begin(), combinations.end(), [&](const vector<int> &a, const vector<int> &b)
         {
             if (frequencyMap[a] != frequencyMap[b])
             {
                 return frequencyMap[a] > frequencyMap[b];
             }
             return a < b; });

    // Print the unique elements in the first combination
    if (!combinations.empty())
    {
        const auto &firstCombination = combinations.front();
        set<int> uniqueElements(firstCombination.begin(), firstCombination.end());

        for (int element : uniqueElements)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }

    return 0;
}
