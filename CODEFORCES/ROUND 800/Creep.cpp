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
        //string str;
        if (a < b)
        {
            for (int i = 0; i < a; i++)
            {
                cout << "10";
            }
            for (int i = 0; i < b - a; i++)
            {
                cout << "1";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < b; i++)
            {
                cout << "01";
            }
            for (int i = 0; i < a - b; i++)
            {
                cout << "0";
            }
            cout << "\n";
        }

    }

    return 0;
}