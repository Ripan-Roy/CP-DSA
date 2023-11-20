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

void helper(int idx, int n, int k, vector<int> &arr, vector<int> &ans, int sum, int count)
{
    if (idx == n)
    {
        if (sum == k)
        {
            // for (auto it : ans)
            // {
            //     cout << it << " ";
            // }
            // cout << endl;
            count++;
        }
        return;
    }
    // Not take
    helper(idx + 1, n, k, arr, ans, sum, count);

    // Take
    ans.push_back(arr[idx]);
    sum += arr[idx];
    helper(idx + 1, n, k, arr, ans, sum, count);
    ans.pop_back();
    sum -= arr[idx];
}

int main()
{
    fastIO;
    int count = 0;
    int sum = 0;
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    helper(0, n, k, arr, ans, sum, 0);
    cout << count << endl;
    return 0;
}