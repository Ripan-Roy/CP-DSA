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
        long long n, q, x, y;
        cin >> n >> q;
        string str1, str2;
        cin >> str1 >> str2;
        vector<long long int> arr(n), oddNOs(n), evNOs(n);
        for (long long i = 0; i < n; i++)
        {
            if (str2[i] >= str1[i])
            {
                arr[i] = (str2[i] - str1[i]);
            }
            else
            {
                arr[i] = 26 - (str1[i] - str2[i]);
            }
        }

        oddNOs[0] = 0;
        evNOs[0] = arr[0];
        for (long long i = 1; i < n; i++)
        {
            if (i % 2)
            {
                oddNOs[i] = oddNOs[i - 1] + arr[i];
                evNOs[i] = evNOs[i - 1];
            }
            else
            {
                oddNOs[i] = oddNOs[i - 1];
                evNOs[i] = evNOs[i - 1] + arr[i];
            }
        }

        long long sr1, sr2;
        for (long long i = 0; i < q; i++)
        {
            cin >> x >> y;
            x--;
            y--;
            sr1 = oddNOs[y];
            sr2 = evNOs[y];
            if (x > 0)
            {
                sr1 -= oddNOs[x - 1], sr2 -= evNOs[x - 1];
            }

            if (abs(sr1 - sr2) % 26 == 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}