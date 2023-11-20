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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (auto &val : arr)
    {
        cin >> val;
    }
    for (auto &val : brr)
    {
        cin >> val;
    }

    // Calculate the initial difference and store it in a variable
    ll original_diff = 0;
    for (int i = 0; i < n; i++)
    {
        ll beauty = abs(arr[i] - brr[i]);
        original_diff += beauty;
    }

    // Initialize ans with the original difference
    ll ans = original_diff;

    // Iterate over the array and calculate the difference for each swap
    for (int i = 0; i < n; i++)
    {
        ll substract = abs(arr[i] - brr[i]);
        ll addn = abs(arr[(i + 1) % n] - brr[i]) + abs(arr[i] - brr[(i + 1) % n]);
        ll current_diff = original_diff - substract + addn;

        // Update ans if the current difference is greater
        ans = max(ans, current_diff);
    }

    cout << ans << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
