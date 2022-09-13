#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    //vector<int> ans(n, 0);
    int maxE= 0;
    for (int i = 0; i < n; i++)
    {
        maxE = max(maxE, (arr1[i] - arr2[i]));
    }
    cout << maxE << endl;
    

    return 0;
}