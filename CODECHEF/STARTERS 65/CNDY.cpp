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
    vector<ll> arr1(2*n);
    for (ll i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }
    map<ll, ll> mp;
    for(auto it : arr1)
    {
        mp[it]++;
    }
    bool check = false;
    for (auto it : mp)
    {
        if (it.second > 2)
        {
            check = true;
            break;
        }
    }
    if(check)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
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