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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll curr = 0;
    ll longest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr++;
        }
        else
        {
            longest = max(longest, curr);
            curr = 0;
        }
    }
    longest = max(longest, curr);
    cout << longest << "\n";
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