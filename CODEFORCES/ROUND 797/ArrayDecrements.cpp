#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int count = 0;
    bool counter = false;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            continue;
        }
        else if (a[i] < b[i])
        {
            cout << "NO"
                 << "\n";
            return;
        }
        else
        {
            if (!counter)
            {
                count = a[i] - b[i];
                counter = true;
            }
            else
            {
                if (count != a[i] - b[i])
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
        }
    }
    cout << "YES"
         << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}