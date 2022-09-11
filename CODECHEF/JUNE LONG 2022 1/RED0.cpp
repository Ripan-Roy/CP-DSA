#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << x << "\n";
        }
        else if (x == 0 || y == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
             ll mini = min(x, y);
            unsigned ll maxi = max(x, y);
            unsigned ll cnt = 0;
            while (mini < maxi)
            {
                mini = mini * 2;
                cnt++;
            }
            if(mini > maxi)
            {
                mini = mini / 2;
                cnt--;
            }
            ll temp = mini - (maxi - mini);
            mini = mini - temp;
            maxi = maxi - temp;
            cnt = cnt + temp;
            mini = mini * 2;
            cnt++;
            cnt = cnt + maxi;
            cout << cnt << "\n";
        }
    }
    return 0;
}