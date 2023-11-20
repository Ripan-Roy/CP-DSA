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
    string s;
    cin >> s;
    ll ans = 0, last = 1;
    for (auto ch : s)
    {
        int d = ch - '0';
        if (d == 0)
        {
            d += 10;
        }
        ans += 1 + abs(last - d);
        last = d;
    }
    cout << ans << '\n';
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