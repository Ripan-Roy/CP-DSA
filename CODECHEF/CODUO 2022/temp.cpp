#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int prefSum[n];
        prefSum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            prefSum[i] = prefSum[i - 1] + arr[i];
        }
        // 1 2 3 4 5
        // 1 3 5 9 14
        for (int i = 1; i <= n; i++)
        {
            cout << prefSum[i] << " ";
        }
    }

    return 0;
}