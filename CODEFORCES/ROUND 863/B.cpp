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
    ll n, x1, x2, y1, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;
    ll ans1 = min(min(n - x1 - 1, x1), min(n - y1 - 1, y1));
    ll ans2 = min(min(n - x2 - 1, x2), min(n - y2 - 1, y2));
    cout << abs(ans1 - ans2) << "\n";
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