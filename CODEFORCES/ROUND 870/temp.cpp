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
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '(')
        {
            count++;
        }
        else
        {
            count--;
            if (count < 0)
            {
                count = 0;
                ans++;
            }
        }
    }
    cout << ans << "\n";
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