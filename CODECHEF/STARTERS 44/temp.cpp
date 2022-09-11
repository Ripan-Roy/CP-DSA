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
        int x1, y1, x2, y2, temp;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        if (x1 == x2 || x1 > x2 || x2 > x1)
        {
            temp = y2 % 2;
            if (temp == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
        return 0;
    }
}