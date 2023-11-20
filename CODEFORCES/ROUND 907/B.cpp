#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

const int N = 1e5 + 5;
const int mod = 1e9 + 7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isPowerTwo(int n)
{
    return (n && !(n & (n - 1)));
}

void helper()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vector<ll> arr(n), xrr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        if(xrr.size() == 0 or xrr.back() > x)
        {
            xrr.push_back(x);
        }

    }
    ll size = xrr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < xrr.size(); j++)
        {
            if (arr[i] % (ll)pow(2, xrr[j]) == 0)
            {
                arr[i] += (ll) pow(2, xrr[j] - 1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}