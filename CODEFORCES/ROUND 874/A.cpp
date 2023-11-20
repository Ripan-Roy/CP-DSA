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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    unordered_set<string> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(str.substr(i, i + 1));
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
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