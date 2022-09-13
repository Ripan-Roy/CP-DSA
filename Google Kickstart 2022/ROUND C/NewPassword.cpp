#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ts = 1;
    ll te;
    cin >> te;
    while (ts <= te)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        bool caps = false;
        bool spc = false;
        bool digit = false;
        bool lows = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                digit = true;
            }
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                lows = true;
            }
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                caps = true;
            }
            if (str[i] == '#' || str[i] == '*' || str[i] == '@' || str[i] == '&')
            {
                spc = true;
            }
        }
        if (!lows)
        {
            str.push_back('a');
        }
        if (!caps)
        {
            str.push_back('A');
        }
        if (!digit)
        {
            str.push_back('9');
        }
        if (!spc)
        {
            str.push_back('#');
        }
        while (str.length() < 7)
        {
            str.push_back('9');
        }
        cout << "Case #" << ts << ": " << str << "\n";
        ts++;
    }

    return 0;
}