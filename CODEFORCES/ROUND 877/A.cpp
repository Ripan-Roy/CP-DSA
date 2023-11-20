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
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            flag = true;
        }
    }
    sort(arr.begin(), arr.end());
    if (!flag)
        cout << arr[n - 1] << "\n";
    else
        cout << arr[0] << "\n";
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