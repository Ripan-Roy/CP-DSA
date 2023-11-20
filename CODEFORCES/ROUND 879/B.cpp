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
    string l, r;
    cin >> l >> r;
    ll size1 = l.length();
    ll size2 = r.length();
    ll ans = 0;
    if (size2 > size1)
    {
        ans = (ll)(r[0] - '0') + 9 * (size2 - 1);
        cout << ans << "\n";
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            if (l[i] != r[i])
            {
                ans = (ll)((r[i] - '0') - (l[i] - '0')) + 9 * (size2 - i - 1);
                cout << ans << "\n";
                return;
            }
        }
        cout << 0 << "\n";
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