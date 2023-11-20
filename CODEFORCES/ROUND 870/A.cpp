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
    string str;
    cin >> str;
    ll n = str.length();
    ll count = 0;
    string s = "codeforces";
    for(int i = 0; i < n; i++)
    {
        if(str[i] != s[i])
        {
            count++;
        }
    }
    cout << count << "\n";
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