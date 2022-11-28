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
    ll s = 0;
    ll count = 0;
    ll e = n - 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (s < e)
    {
        if (arr[s] == arr[e])
        {
            s++;
            e--;
        }
        else if (arr[s] < arr[e])
        {
            arr[e] = abs(arr[s] - arr[e]);
            count++;
            s++;
        }
        else
        {
            arr[s] = abs(arr[e] - arr[s]);
            count++;
            e--;
        }
    }   
    cout << count << "\n";
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