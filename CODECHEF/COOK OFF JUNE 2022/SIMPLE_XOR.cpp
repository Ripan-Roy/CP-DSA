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
        ll l, r;
        cin >> l >> r;
        if (l % 2 == 0)
        {
            if (r >= l + 3)
            {
                cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            if (r >= l + 4)
            {
                l++;
                cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}