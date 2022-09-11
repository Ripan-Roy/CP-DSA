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
        ll a, b;
        cin >> a >> b;
        ll valueationA = (100 * a) / 10;
        ll valueationB = (100 * b) / 20;
        // cout << valueationA << "\n";
        // cout << valueationB << "\n";
        if (valueationB > valueationA)
        {
            cout << "SECOND"
                 << "\n";
        }
        else if (valueationA > valueationB)
        {
            cout << "FIRST"
                 << "\n";
        }
        else
        {
            cout << "ANY"
                 << "\n";
        }
    }
    return 0;
}