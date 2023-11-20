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
    ll n, m;
    cin >> n >> m;
    if (n == 1 || m == 1)
    {
        cout << n << " " << m << "\n";
    }
    else if (n == 3 && m == 3)
    {
        cout << "2 2\n";
    }
    else if (n == 3 && m == 2)
    {
        cout << "2 1\n";
    }
    else if (n == 2 && m == 3)
    {
        cout << "1 2\n";
    }
    else 
    {
        cout << n << " " << m << "\n";
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