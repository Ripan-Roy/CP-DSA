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
        ll x;
        cin >> x;
        if (x < 5)
        {
            cout << "NO\n";
        }
        else
        {
            bool flag = false;
            ll l = sqrt(x);
            for (int i = 1; i <= l; i++)
            {
                ll temp = 2 * i;
                if (((x - temp) % (i + 2)) == 0)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}