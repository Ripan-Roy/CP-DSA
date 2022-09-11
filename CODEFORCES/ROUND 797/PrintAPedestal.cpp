#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll first, second;
        ll third = (n - 3) / 3;
        ll remain = n - third;
        if (remain % 2 == 0)
        {
            first = (remain + 2) / 2;
            second = n - (first + third);
        }
        else
        {
            second = (remain - 1) / 2;
            first = (remain + 1) / 2;
        }
        cout << second << " " << first << " " << third << "\n";
    }
    return 0;
}