#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if((l2<=l1 && l1<=r2) || (l1<=l2 && l2<=r1))
        {
            cout << max(l1,l2) << "\n";
        }
        else 
        {
            cout << l1+l2 << "\n";
        }
    }
    return 0;
}