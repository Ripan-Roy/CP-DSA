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
        ll n;
        cin >> n;
        string str = string(n, '0');
        str[0] = '1';
        str[n - 1] = '1';
        cout << str << "\n";
    }
    return 0;
}