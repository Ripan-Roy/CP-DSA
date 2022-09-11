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
        ll n;
        cin >> n;
        if (n == 2)
        {
            cout << 0 << "\n";
        }
        else if (n % 2 != 0)
        {
            cout << (n / 2) * ((n / 2) + 1) << "\n";
        }
        else if ((n / 2) % 2 == 0)
        {
            cout << (((n / 2) - 1) * (n / 2) + 1) - 1 << "\n";
        }
        else
        {
            cout << (((n / 2) - 2) * (n / 2) + 2) << "\n";
        }
    }
    return 0;
}