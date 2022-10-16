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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << "Yes\n";
    else if (b + c == a)
        cout << "Yes\n";
    else if (a + c == b)
        cout << "Yes\n";
    else
        cout << "No\n";
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