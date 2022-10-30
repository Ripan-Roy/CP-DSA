#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool myComparison(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}


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
    if(n == 1)
    {
        ll x, y;
        cin >> x >> y;
        cout << 2 * x + 2 * y << "\n";
        return;
    }
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            arr[i] = {y, x};
        }
        else
        {
            arr[i] = {x, y};
        }
    }
    sort(arr.begin(), arr.end(), myComparison);
    swap(arr[1].first, arr[n - 1].first);
    swap(arr[1].second, arr[n - 1].second);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << "\n";
    // }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 2 * arr[i].first;
    }
    // cout << ans << "\n";
    ll maxElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxElement = max(maxElement, arr[i].second);
    }
    ans += 2 * maxElement;
    cout << ans << "\n";
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