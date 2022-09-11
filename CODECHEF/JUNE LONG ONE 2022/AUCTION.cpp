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
        if (a > b && a > c)
        {
            cout << "Alice\n";
        }
        else if (b > a && b > c)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Charlie\n";
        }
    }
    return 0;
}