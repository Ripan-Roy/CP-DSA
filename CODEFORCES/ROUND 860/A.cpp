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
    vector<ll> arr1(n);
    vector<ll> arr2(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr1[i] < arr2[i])
        {
            swap(arr1[i], arr2[i]);
        }
        ll max1 = *max_element(arr1.begin(), arr1.end());
        ll max2 = *max_element(arr2.begin(), arr2.end());
        if(max1 == arr1[n - 1] && max2 == arr2[n - 1])
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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