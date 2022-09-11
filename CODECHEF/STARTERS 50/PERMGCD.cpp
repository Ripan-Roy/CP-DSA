#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        if (n > x)
        {
            cout << -1 << "\n";
        }
        else
        {
            ll num = x - n + 1;
            cout << num << " ";
            for (int i = 1; i <= n; i++)
            {
                if (i != num)
                {
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}