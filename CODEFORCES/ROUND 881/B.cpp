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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            continue;
        }
        arr.push_back(x);
        ans1 += abs(x);
    }
    ll count = 0;
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            if (!flag)
            {
                count++;
                flag = true;
            }
        }
        else
        {
            flag = false;
        }
    }
    cout << ans1 << " " << count << "\n";
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