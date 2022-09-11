#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if(x-y>=0)
        {
            cout << x-y << "\n";
        }
        else 
        {
            cout << y-x <<"\n";
        }
    }
    return 0;
}