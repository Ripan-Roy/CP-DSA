#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n > 0 && (n & (n - 1)) == 0)
        {
            long long int power = 1;
            while (pow(2, power) < n)
            {
                power++;
            }
            cout << 1 << " ";
            long long int ans = 1;
            k = k % power;  
            for (int i = 2; i <= n; i++)
            {
                ans = ans + pow(2, k);
                if (ans > n)
                {
                    while (ans > n)
                    {
                        ans = ans - (n - 1);
                    }
                    cout << ans << " ";
                }
                else
                {
                    cout << ans << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}