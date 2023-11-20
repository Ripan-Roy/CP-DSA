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
    n--;
    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    vector<ll> ans(n + 1);
    ans[n] = arr.back();
    ans[0] = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        ans[i + 1] = min(arr[i + 1], arr[i]);
    }
    for (auto it : ans)
    {
        cout << it << " ";
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