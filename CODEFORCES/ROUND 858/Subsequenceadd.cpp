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
    sort(arr.begin(), arr.end());
    vector<ll> prefSum(n, 0);
    prefSum[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        prefSum[i] = prefSum[i - 1] + arr[i];
    }
    if (arr[0] != 1)
    {
        cout << "NO"
             << "\n";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (prefSum[i] < arr[i + 1])
        {
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";
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