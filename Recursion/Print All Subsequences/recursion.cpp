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

void helper(int idx, int n, int size, vector<int> arr, vector<int> ans, vector<vector<int>> &v)
{

    if (idx == n)
    {
        for (int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                v[i].push_back(arr[j]);
            }
        }
         return;
    }
    // Not take
    helper(idx + 1, n, size, arr, ans, v);

    // Take
    ans.push_back(arr[idx]);
    helper(idx + 1, n,size,  arr, ans, v);
    ans.pop_back();
}

int main()
{
    fastIO;
    int n;
    cin >> n;
    int size = pow(2, n);
    vector<int> arr(n);
    vector<vector<int>> v(size);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    helper(0, n, size, arr, ans, v);
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}