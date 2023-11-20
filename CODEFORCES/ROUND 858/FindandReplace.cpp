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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    string alt = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            alt += '0';
        }
        else
        {
            alt += '1';
        }
    }
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = i+1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                if(alt[i] != alt[j])
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}