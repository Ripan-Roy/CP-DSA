#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = (x - 1);
        }
        if (k >= x)
        {
            for (int i = 0; i < k; i++)
            {
                arr[i] = --x;
                if (arr[i] == 0)
                {
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        else if (k < x)
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}