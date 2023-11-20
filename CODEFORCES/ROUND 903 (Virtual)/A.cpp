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
    string str1, str2;
    cin >> str1 >> str2;
    ll count = 0;
    while (count <= 6)
    {
        if (str1.find(str2) != string::npos)
        {
            break;
        }
        str1 += str1;
        count++;
    }
    if (str1.find(str2) != string::npos)
    {
        cout << count  << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
