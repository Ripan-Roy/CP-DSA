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
        ll a, b, c;
        cin >> a >> b >> c;
        ll total = a + b + c;
        if (a < 10 || b < 10 || c < 10)
        {
            cout << "FAIL\n";
        }
        else if (total < 100)
        {
            cout << "FAIL\n";
        }
        else
        {
            cout << "PASS\n";
        }
    }
    return 0;
}