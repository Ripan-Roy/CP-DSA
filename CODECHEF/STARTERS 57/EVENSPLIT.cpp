#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        if (str == "00" || str == "11" || str == "01" || str == "10")
        {
            cout << str << "\n";
        }
        else
        {
            ll zeroes = 0, ones = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i] == '0')
                {
                    zeroes++;
                }
                else
                {
                    ones++;
                }
            }
            string ans = "";
            for(int i = 0; i < zeroes; i++)
            {
                ans += "0";
            }
            for(int i = 0; i < ones; i++)
            {
                ans += "1";
            }
            cout << ans << "\n";
        }
    }
    return 0;
}