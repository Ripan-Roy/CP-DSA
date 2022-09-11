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
        ll m,a,b;
        cin >> a >> b >> m;
        if(abs(b-a)>m-abs(b-a))
        {
            cout << m-abs(b-a) << "\n"; 
        }
        else
        {
            cout << abs(b-a) << "\n";
        }
    }
    return 0;
}