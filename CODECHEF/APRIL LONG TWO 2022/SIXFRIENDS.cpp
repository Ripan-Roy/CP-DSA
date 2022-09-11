#include <bits/stdc++.h>
#define LL long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL t;
    cin >> t;
    while (t--)
    {
        LL x, y;
        cin >> x >> y;
        if ((x * 3) > (y * 2))
        {
            cout << (y * 2) << "\n";
        }
        else
        {
            cout << (x * 3) << "\n";
        }
    }
    return 0;
}