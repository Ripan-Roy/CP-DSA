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
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
