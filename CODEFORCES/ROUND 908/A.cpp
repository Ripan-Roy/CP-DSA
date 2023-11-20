#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;

    cout << str[n - 1] << "\n";
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}