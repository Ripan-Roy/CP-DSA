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
        string str;
        cin >> str;
        for (int i = 1; i <= a; i++)
        {
            str.push_back('0');
        }
        for (int i = 1; i <= b; i++)
        {
            str.push_back('1');
        }
        cout << str << "\n";
    }

    return 0;
}