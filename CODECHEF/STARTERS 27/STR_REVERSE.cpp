#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string str2 = str;
        reverse(str.begin(), str.end());
        int m = str.length(), num = str2.length();
        int arr[256];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < num; i++)
            arr[str2[i]]++;
        for (int i = 0; i < num; i++)
            arr[str[i]]--;
        int ans = 0;
        for (int i = num - 1, j = num - 1; i >= 0;)
        {
            while (i >= 0 && str[i] != str2[j])
            {
                i--;
                ans++;
            }
            if (i >= 0)
            {
                i--;
                j--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}