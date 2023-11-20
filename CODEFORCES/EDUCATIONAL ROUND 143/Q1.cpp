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
    ll n, m;
    cin >> n >> m;
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    reverse(str2.begin(), str2.end());
    str1 =  str1 + str2;
    ll count = 0;
    for (auto i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str1[i + 1])
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
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