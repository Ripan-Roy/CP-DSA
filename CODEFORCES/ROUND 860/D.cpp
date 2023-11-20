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
    ll maxEle = arr[n - 1];
    ll minEle = arr[0];
    if (n == 1)
    {
        cout << "No\n";
    }
    else
    {
        vector<ll> ans;
        ll sum = 0;
        ll i = 0, j = n - 1;
        while (i <= j)
        {
            sum += arr[i];
            if (sum < maxEle - minEle)
            {
                ans.push_back(arr[i]);
                i++;
            }
            else
            {
                sum -= arr[i];
                j--;
            }
        }
        cout << "Yes\n";
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
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