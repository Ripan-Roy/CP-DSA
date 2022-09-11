#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll count = 1;
        cin >> n;
        string str;
        cin >> str;
        bool counter = true;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
            {
                counter = true;
            }
            else
            {
                counter = false;
                break;
            }
        }
        if (counter)
        {
            cout << 1 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'c' || str[i] == 'g' || str[i] == 'l' || str[i] == 'r')
                {
                    count = (count * 2) % mod;
                }
            }
            cout << count % mod << "\n";
        }
    }
    return 0;
}