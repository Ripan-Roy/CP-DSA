#include <bits/stdc++.h>
#define ll long long
#define pb push_back
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
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m, x;
        vector<int> arr1, arr2, arr3, arr4;
        cin >> n >> m;
        if (n == 1 || m == 1)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cin >> x;
                    arr1.pb(x);
                }
            }
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cin >> x;
                    arr2.pb(x);
                }
            }
            if (arr1 == arr2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cin >> x;
                    if ((i ^ j) % 2)
                    {
                        arr1.pb(x);
                    }
                    else
                    {
                        arr2.pb(x);
                    }
                }
            }
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cin >> x;
                    if ((i ^ j) % 2)
                    {
                        arr3.pb(x);
                    }
                    else
                    {
                        arr4.pb(x);
                    }
                }
            }
            sort(arr1.begin(), arr1.end());
            sort(arr2.begin(), arr2.end());
            sort(arr3.begin(), arr3.end());
            sort(arr4.begin(), arr4.end());
            if (arr1 == arr3 && arr2 == arr4)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}