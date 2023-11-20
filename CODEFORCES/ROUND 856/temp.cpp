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
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '1' && str[i] != '4')
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (str[0] == '4')
    {
        cout << "NO" << endl;
        return;
    }
    if (str.find("444") != string::npos)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{
    fastIO;
    helper();
    return 0;
}