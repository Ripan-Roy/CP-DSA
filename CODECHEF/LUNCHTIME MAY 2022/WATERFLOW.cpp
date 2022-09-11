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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        ll temp = (z * y) + w;
        if(temp>x)
        {
            cout << "overflow\n";
        }
        else if(temp<x)
        {
            cout << "unfilled\n";
        }
        else
        {
            cout << "filled\n";
        }
    }
    return 0;
}