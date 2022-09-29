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
    // sort(arr.begin(), arr.end());
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    ll cnt = 0;
    bool flag = false;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cnt = max(cnt, it.second);
            flag = true;
        }
    }
    if(flag == true)
    {
        cout << ceil(log2(cnt)) << "\n";
    }
    else
    {
        cout << 0 << "\n";
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