#include <bits/stdc++.h>
#define ll long long
using namespace std;

int countS(ll n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + countS(n & (n - 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = countS(n);
        if (count == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << count - 1<< "\n";
        }
    }
    return 0;
}