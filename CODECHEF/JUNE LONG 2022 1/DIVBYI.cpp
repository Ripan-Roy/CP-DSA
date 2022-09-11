#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n == 2)
        {
            cout << 1 << " " << 2 << "\n";
        }
        else
        {
            if(n%2 == 0)
            {
                ll ans = n/2;
                cout << ans << " ";
                ans++;
                while(ans<n)
                {
                    cout << ans << " ";
                    cout << n - ans << " ";
                    ans++;
                }
                cout << n << "\n";
            }
            else
            {
                ll ans = n/2;
                ans++;
                while(ans<n)
                {
                    cout << ans << " ";
                    cout << n - ans << " ";
                    ans++;
                }
                cout << n << "\n";
            }
        }
    }    
    return 0;
}