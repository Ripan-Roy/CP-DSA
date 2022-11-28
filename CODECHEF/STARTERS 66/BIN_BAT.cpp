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
    ll n, a, b;
    cin >> n >> a >> b;
    int pow = 0;
    while (n != 1)
    {
        n = n / 2;
        pow++;
    }
    cout << pow * a + (pow - 1) * b << "\n";
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