#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double


void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll x, y , k;
    cin >> x >> y >> k;
    cout << max({x, y, 2 * y - x - k}) << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}