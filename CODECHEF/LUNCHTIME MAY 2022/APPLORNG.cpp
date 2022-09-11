#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, a, b;
    cin >> x >> a >> b;
    if(a+b<=x) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}