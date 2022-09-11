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
        ll a, b, l;
        cin >> l >> a >> b;
        if(l*l>a*b)
        {
            cout << "Chef" << "\n";
        }
        else if(l*l<a*b)
        {
            cout << "Divyam" << "\n";
        }
        else 
        {
            cout << "Draw" << "\n";
        }
    }
    return 0;
}