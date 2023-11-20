#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    if(n == 1)
    {
        cout << "YES\n";
        return;
    }
    unordered_map<char, ll> mp;
    for (auto it : str)
    {
        mp[it]++;
    }
    ll count = 0;
    for (auto &it : mp)
    {
        if (it.second % 2 == 1)
        {
            count++;
        }
    }
    if(k < count - 1)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        cout << "YES\n";
        return;
    }
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}