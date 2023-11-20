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
    map<char, ll> mp;
    for (auto i : str)
    {
        mp[i]++;
    }
    if (mp.size() == 1)
    {
        cout << "-1\n";
        return;
    }
    if (mp.size() == 4)
    {
        cout << "4\n";
        return;
    }
    if (mp.size() == 3)
    {
        cout << "4\n";
        return;
    }
    if (mp.size() == 2)
    {
        for (auto it : mp)
        {
            if (it.second == 3)
            {
                cout << "6\n";
                return;
            }
        }
        for (auto it : mp)
        {
            if (it.second == 2)
            {
                cout << "4\n";
                return;
            }
        }
    }
    cout << "-1\n";
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