#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m;
    cin >> n >> m;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        long long int c, x;
        cin >> c >> x;
        vector<long long int> arr2(2 * x);
        for (int i = 0; i < 2 * x; i++)
        {
            cin >> arr2[i];
        }
        long long int temp = arr[c - 1];
        arr[c - 1] = 0;
        for (int i = 0; i < 2 * x - 1; i += 2)
        {
            arr[arr2[i + 1] - 1] = (arr[arr2[i + 1] - 1] + temp * arr2[i]) % mod;
        }
    }
    for (auto it : arr)
    {
        cout << it << "\n";
    }
    return 0;
}