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
    ll n,k;
    cin >> n >> k;
    vector<ll> arr(n);
    bool counter = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == k && i!= n - 1)
        {
            counter = true;
        }
    }
    if(n == 1 && k == arr[0])
    {
        cout << "YES\n";
    }
    else
    {
        if(counter)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
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