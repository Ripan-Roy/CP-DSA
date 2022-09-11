#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);
        vector<int> cumArr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                cumArr[i] = arr[i];
            }
            else
            {
                cumArr[i] = cumArr[i - 1] + arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << cumArr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}