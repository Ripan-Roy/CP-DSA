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

int main()
{
    fastIO;
    ll n;
    cin >> n;
    if (n >= 1 && n <= 14)
    {
        cout << "YES\n";
    }
    else if (n == 22 || n == 23 || n == 24 || n == 25)
    {
        cout << "YES\n";
    }
    else if(n == 16 || n == 17 || n == 18 || n == 19)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}