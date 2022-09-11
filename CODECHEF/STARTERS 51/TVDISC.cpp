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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a - c;
        b = b - d;
        if (a > b)
        {
            cout << "First\n";
        }
        else if (a < b)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "Any\n";
        }
    }
    return 0;
}