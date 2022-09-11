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
        ll n;
        cin >> n;
        ll atk = 0, def = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x > 500)
            {
                atk++;
            }
            else if (x < 500)
            {
                def += (1000 - x);
            }
            else
            {
                if (count % 2 == 0)
                {
                    atk += x;
                }
                else
                {
                    def += (1000 - x);
                }
                count++;
            }
        }
        cout << atk * def << "\n";
    }
    return 0;
}