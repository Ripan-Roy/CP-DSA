#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int helper(ll a, ll b)
{
    ll low = min(a, b);
    ll high = max(a, b);
    ll ans = low;
    while (true)
    {
        ans = ans * 2;
        if (ans < high)
        {
            continue;
        }
        else if (ans == high)
        {
            return 1;
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll minX = INT_MAX;
        ll it = 0;
        while ((minX > arr[it]) && it < n && y > 0)
        {
            if ((arr[it] ^ x) < minX)
            {
                minX = arr[it] ^ x;
            }
            arr[it] ^= x;
            y--;
            it++;
        }
        sort(arr, arr + n);
        if (y % 2)
        {
            arr[0] = arr[0] ^ x;
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}