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
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 1 && b % 2 == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n"; 
        }
    }
    return 0;
}