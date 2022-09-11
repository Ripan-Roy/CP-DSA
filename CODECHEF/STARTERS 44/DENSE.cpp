#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        ll n;
        cin >> n;
        vector<ll> suff(n, 0), pref(n, 0);
        for (ll i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                pref[i]++;
            }
            if (i > 0)
            {
                pref[i] = pref[i] + pref[i - 1];
            }
        }
        ll temp = n - 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (str[i] == ')')
            {
                suff[i]++;
            }
            if (i < n - 1)
            {
                suff[i] = suff[i] + suff[i + 1];
            }
            temp = min(temp, 2 * min(suff[i], pref[i]));
        }
        cout << temp << "\n";
    }
    return 0;
}