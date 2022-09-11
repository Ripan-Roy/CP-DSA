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
        ll row = 0, col = 0;
        char arr[8][8];
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                if (arr[i][j] == '#')
                {
                    if (arr[i - 1][j - 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#' && arr[i - 1][j + 1] == '#')
                    {
                        row = i + 1;
                        col = j + 1;
                        break;
                    }
                }
            }
        }
        cout << row << " " << col << "\n";
    }
    return 0;
}