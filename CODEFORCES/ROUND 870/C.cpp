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

// sort by second element

// static bool cmp(pair<ll, string> a, pair<ll, string> b)
// {
//     return stoi(a.second) > stoi(b.second);
// }

void helper()
{
    ll n;
    cin >> n;
    vector<ll> arr1;
    vector<ll> arr2;
    vector<ll> arr3;
    vector<ll> arr4;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        string str;
        cin >> str;
        if (str == "00")
        {
            arr1.push_back(x);
        }
        else if (str == "10")
        {
            arr2.push_back(x);
        }
        else if (str == "01")
        {
            arr3.push_back(x);
        }
        else
        {
            arr4.push_back(x);
        }
    }
    bool flag = false;
    ll maxi = INT_MAX;
    ll size1 = arr1.size();
    ll size2 = arr2.size();
    ll size3 = arr3.size();
    ll size4 = arr4.size();
    if (size4 != 0)
    {
        maxi = *min_element(arr4.begin(), arr4.end());
        flag = true;
    }
    if (size2 != 0 && size3 != 0)
    {
        ll min1 = *min_element(arr3.begin(), arr3.end());
        ll min2 = *min_element(arr2.begin(), arr2.end());
        if (min1 + min2 < maxi)
        {
            maxi = min1 + min2;
        }
        flag = true;
    }

    if (flag)
    {
        cout << maxi << "\n";
    }
    else
    {
        cout << -1 << "\n";
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