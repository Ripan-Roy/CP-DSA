#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == str[i + 1])
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}