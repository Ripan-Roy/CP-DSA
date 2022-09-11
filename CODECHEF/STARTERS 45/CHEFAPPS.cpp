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
        ll s, x, y, z;
        cin >> s >> x >> y >> z;
        ll unusedMem = s - (x + y);
        if (unusedMem >= z)
        {
            cout << 0 << "\n";
        }
        else
        {
            if (unusedMem + x >= z || unusedMem + y >= z)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
    }
    return 0;
}