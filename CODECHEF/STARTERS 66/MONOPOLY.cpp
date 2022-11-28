#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    if(r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}