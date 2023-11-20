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
    ll zeros = 0;
    ll ones = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if(arr[i] == 1)
        {
            ones++;
        }
    }
    ll find1 = n - zeros;
    if (zeros == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (zeros <= find1 + 1)
    {
        cout << 0 << "\n";
        return;
    }
    if (ones == 0)
    {
        cout << 1 << "\n";
        return;
    }
    else
    {
        if (zeros + ones == n && ones > 0)
        {
            cout << 2 << "\n";
            return;
        }
        else
        {
            cout << 1 << "\n";
            return;
        }
    }
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