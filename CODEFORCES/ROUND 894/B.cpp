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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> ans;
    ans.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            ans.push_back(arr[i]);
        }
        else
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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