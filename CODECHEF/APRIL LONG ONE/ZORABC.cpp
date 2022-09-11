#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        ll ans = num & ~(num - 1);
        if (num & 1 || num == ans)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans / 2 << " " << num / 2 << " " << (num - ans) / 2 << "\n";
        }
    }
    return 0;
}