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
        ll p, q;
        cin >> p >> q;
        if ((p + q) % 4 == 0 || (p + q - 1) % 4 == 0)
        {
            cout << "ALICE\n";
        }
        else
        {
            cout << "BOB\n";
        }
    }
    return 0;
}