#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ts = 1;
    ll te;
    cin >> te;
    while (ts <= te)
    {
        cout << "Case #" << ts++ << ": ";
        ll n, x, y;
        cin >> n >> x >> y;
        x = x + y;
        ll count = 0;
        ll size = (n * (n + 1)) / 2;

        if ((size % x) == 0)
        {
            cout << "POSSIBLE" << "\n";
            x = size / x;
            y = y * x;
            size = n;
            vector<ll> arr(size + 3);
            for (ll i = 1; i <= size; i++)
            {
                if (i >= 1)
                {
                    arr[i - 1] = i;
                }
            }
            for (ll i = size - 1; i >= 0; i--)
            {
                if (arr[i] <= y)
                {
                    y = y - arr[i];
                    arr[i] = 0;
                }
            }
            for (ll i = 1; i <= size; i++)
            {
                if (arr[i] != 0)
                {
                    count++;
                }
            }
            cout << count << "\n";
            for (ll i = 0; i < size; ++i)
            {
                if (arr[i] > 0 || arr[i] < 0)
                {
                    cout << i + 1 << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            cout << "IMPOSSIBLE" << "\n";
        }
    }
    return 0;
}