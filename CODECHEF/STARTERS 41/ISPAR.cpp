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
        ll n, k;
        cin >> n >> k;
        if(k==1)
        {
            if(n%2==1)
            {
                cout << "ODD" << "\n";
            }
            else
            {
                cout << "EVEN" << "\n";
            }
        }
        else
        {
            if(k==2)
            {
                cout << "ODD" << "\n";
            }
            else
            {
                cout << "EVEN" << "\n";
            }
        }

    }
    return 0;
}