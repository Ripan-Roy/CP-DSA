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
    int n;
    cin >> n;
    string str;
    cin >> str;
    string s = "";
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            s += "FB";
        }
        else if (i % 3 == 0)
        {
            s += "F";
        }
        else if (i % 5 == 0)
        {
            s += "B";
        }
    }
    cout << s << endl;
    if (s.find(str) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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