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
    ll count = 0;
    ll start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else if (arr[start] < arr[end])
        {
            arr[start] = arr[start] + 1;
            count++;
            start++;
        }
        else
        {
            arr[end] = arr[end] + 1;
            count++;
            end--;
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