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
    vector<int> arr;
    ll zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    ll minEl = 0;
    ll maxEl = 0;
    if (zeroCount)
    {
        cout << 0 << "\n";
        return;
    }
    if(n == 1)
    {
        cout << abs(arr[0]) << "\n";
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0 && arr[i + 1] > 0)
        {
            minEl = arr[i];
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            maxEl = arr[i];
            break;
        }
    }
    // cout << maxEl << " " << minEl << endl;
    cout << min(abs(minEl), abs(maxEl)) << "\n";
}

int main()
{
    fastIO;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}