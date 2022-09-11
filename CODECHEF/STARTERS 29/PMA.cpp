#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long int> arr(n);
        vector<long long int> arr1, arr2;
        for (auto &it : arr)
        {
            cin >> it;
        }
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                arr1.push_back(abs(arr[i]));
            }
            else
            {
                arr2.push_back(abs(arr[i]));
            }
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        if (arr1[arr1.size() - 1] > arr2[0])
        {
            swap(arr1[arr1.size() - 1], arr2[0]);
        }
        long long int sum = 0;
        for (auto it : arr2)
        {
            sum = sum + it;
        }
        for (auto it : arr1)
        {
            sum = sum - it;
        }
        cout << sum << "\n";
    }
    return 0;
}