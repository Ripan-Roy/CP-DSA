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
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string s1 = str;
        s1.erase(i, 2);
        mp[s1] = true;
    }
    ll count = 0;
    for (auto it : mp)
    {
        if (it.second == true)
        {
            count++;
        }
    }
    cout << count - 1 << "\n";
}

int main()
{
    freopen("input.txt", "r", stdin);                            
    freopen("output.txt", "w", stdout);
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}