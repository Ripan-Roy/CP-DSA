#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 8;
        char arr[9][9];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int r, c;
        for (int i = 2; i <= n - 1; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#')
                {
                    r = i;
                    c = j;
                    break;
                }
            }
        }
        cout << r << " " << c << "\n";
    }
    return 0;
}