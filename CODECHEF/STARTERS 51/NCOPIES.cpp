#include <bits/stdc++.h>
#define ll long long
using namespace std;


void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        char str[200002];
        ll n, m;
        // cin >> n >> m;
        cin >> n >> m >> str + 1;
        ll temp1 = 0;
        ll temp2 = 0;
        ll temp3 = 0;
        //ll ans = 0;
        for (int i = 1; i <= n; ++i)
            if (str[i] == '1')
            {
                temp1++;

            }
        if (temp1 == 0)
        {
            //cout << 0 << "\n";
            cout << n * m << "\n";
            continue;
        }
        if (temp1 * m % 2 == 1)
        {
            //cout << 1 << "\n";
            cout << 0 << "\n";
            continue;
        }
        if (m % 2 == 0)
        {
            for (int i = 1; i <= n; ++i)
            {
                // if (str[i] == '1')
                // {
                //     temp2++;
                // }
                if (str[i] == '1')
                {
                    break;
                }
                temp2++;
            }
            for (int i = n; i >= 1; --i)
            {
                // if (str[i] == '1')
                // {
                //     temp3++;
                // }
                if (str[i] == '1')
                {
                    break;
                }
                temp2++;
            }
            cout << temp2 + 1 << "\n";
            continue;
        }
        for (int i = 1; i <= n; ++i)
        {
            // if (str[i] == '1')
            // {
            //     temp2++;
            // }
            if (str[i] == '1')
            {
                temp3++;
            }
            // if (temp3 == 2)
            // {
            //     break;
            // }
            if (temp3 == temp1 / 2)
            {
                temp2++;
            }
        }

        cout << temp2 << "\n";
    }
    return 0;
}