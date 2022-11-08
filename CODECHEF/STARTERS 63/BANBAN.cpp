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
    string str1;
    for (int i = 0; i < n; i++)
    {
        str1 += "BAN";
    }
    // cout << str1 << endl;
    string str = str1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'B')
        {
            str[i] = 'N';
        }
        else if (str[i] == 'N')
        {
            str[i] = 'B';
        }
    }
    // cout << str << endl;
    int count = (n + 1) / 2;
    cout << count << "\n";
    for (int i = 0; i < count; i++)
    {
        cout << (i * 3) + 1 << " " << (3 * n) - (3 * i + 1);
        cout << "\n";
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