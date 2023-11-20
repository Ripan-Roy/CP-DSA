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
    ll n, m;
    cin >> n >> m;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll distX = abs(x1 - x2);
    ll distY = abs(y1 - y2);
    if (x1 == 1 && y1 == 1 || x2 == 1 && y2 == 1 || x1 == n && y1 == 1 || x2 == n && y2 == 1 || x1 == 1 && y1 == m || x2 == 1 && y2 == m || x1 == n && y1 == m || x2 == n && y2 == m)
    {
        cout << "2\n";
    }
    else if (x1 - 1 == 0 || x2 - 1 == 0 || x1 - n == 0 || x2 - n == 0 || y1 - 1 == 0 || y2 - 1 == 0 || y1 - m == 0 || y2 - m == 0)
    {
        cout << "3\n";
    }
    else
    {
        cout << "4\n";
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