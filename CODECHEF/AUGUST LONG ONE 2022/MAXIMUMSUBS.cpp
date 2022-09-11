#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int helper(ll a, ll b)
{
    ll low = min(a, b);
    ll high = max(a, b);
    ll ans = low;
    while (true)
    {
        ans = ans * 2;
        if (ans < high)
        {
            continue;
        }
        else if (ans == high)
        {
            return 1;
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << n * 2 << "\n";
    }
    return 0;
}