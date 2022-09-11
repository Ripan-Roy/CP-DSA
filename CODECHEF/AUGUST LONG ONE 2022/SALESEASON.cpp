#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        if(x<=100)
        {
            cout << x << "\n";
        }
        else if(x>100 && x<=1000)
        {
            cout << x - 25 << "\n";
        }
        else if(x>1000 && x<=5000)
        {
            cout << x - 100 << "\n";
        }
        else
        {
            cout << x - 500 << "\n";
        }
    }
    return 0;
}