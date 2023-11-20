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
    ll n, d;
    cin >> n >> d;
    string str;
    cin >> str;
    // if (d == 0)
    // {
    //     str.push_back('0');
    //     cout << str << endl;
    //     return;
    // }
    // if(d == 1 && str[0] == '')
    // {
    //     str.push_back('1');
    //     cout << str << endl;
    //     return;
    // }
    ll pos = -1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        ll digit = str[i] - '0';
        if (digit < d)
        {
            pos = i;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        str.push_back(d + '0');
        cout << str << "\n";
    }
    else
    {
        str.insert(pos, to_string(d));
        cout << str << "\n";
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