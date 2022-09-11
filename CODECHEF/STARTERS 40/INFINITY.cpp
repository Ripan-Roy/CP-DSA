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
        ll count = 0;
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else if (n == 2 || n == 3)
        {
            cout << 1 << "\n";
        }
        else if (n == 5)
        {
            cout << 2 << "\n";
        }
        else
        {
            ll temp = (n - 1) / 5;
            ll count = temp * 2;
            temp = (n - 1) % 5;
            while (temp)
            {
                if (temp >= 3)
                {
                    temp -= 3;
                }
                else if (temp >= 2)
                {
                    temp -= 2;
                }
                else
                {
                    temp -= 1;
                }
                count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}