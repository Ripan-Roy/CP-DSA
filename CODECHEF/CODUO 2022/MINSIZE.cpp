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
        long long n, m, p;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        cin >> p;
        bool check = false;
        sort(a.begin(), a.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());
        ll mini = min(m, n);
        ll temp1 = 0, temp2 = 0, cnt = 0;
        for (ll i = 0; i < mini; i++)
        {
            temp1 += a[i];
            temp2 += b[i];
            cnt++;
            if ((temp1 * temp2) >= p)
            {
                check = true;
                break;
            }
        }
        if (check)
        {
            cout << cnt << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}