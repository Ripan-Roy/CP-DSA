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
    ll maxElement = *max_element(arr.begin(), arr.end());
    ll minElement = *min_element(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxElement)
        {
            count++;
        }
    }
    // if (count == 1 && arr[0] == maxElement)
    // {
    //     cout << "Alice\n";
    // }
    // else
    // {
    //     cout << "Bob\n";
    // }
    if(arr[0] == minElement)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Alice\n";
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