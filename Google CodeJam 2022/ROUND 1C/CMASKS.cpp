#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if(x*100>=y*10)
        {
            cout << "Cloth" << "\n";
        }
        else
        {
            cout << "Disposable" << "\n";
        }
    }
    return 0;
}