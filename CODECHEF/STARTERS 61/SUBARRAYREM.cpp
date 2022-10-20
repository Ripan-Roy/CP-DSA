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
    ll zeroes = 0;
    ll ones = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zeroes++;
        }
        else
        {
            ones++;
        }
    }
    ll score = 0;
    if (ones == n)
    {
        cout << 1 << "\n";
    }
    else if(zeroes == n)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << 2 << "\n";
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