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

void print(ll i, ll n)
{
    if (i > n)
    {
        return;
    }
    cout << "Ripan\n";
    print(i + 1, n);
}

int main()
{
    fastIO;
    ll n;
    cin >> n;
    print(1, n);
    return 0;
}