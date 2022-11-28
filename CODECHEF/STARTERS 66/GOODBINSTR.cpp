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
    ll size = str.length();
    if(str[0] == str[size - 1])
    {
        cout << size - 2 << "\n";
    }
    else 
    {
        cout << 2 << "\n";
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