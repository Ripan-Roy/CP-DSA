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
        ll p;
        cin >> p;
        ll count = 0;
        ll hundreds = p / 100;
        ll ones = p % 100;
        if ((hundreds + ones) > 10)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << hundreds + ones << "\n";
        }
    }

    return 0;
}