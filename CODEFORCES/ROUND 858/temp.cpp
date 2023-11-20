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
    ll evensum = 0;
    ll oddsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<ll>());
    for (auto it : arr)
    {
        if (it % 2 == 0)
        {
            evensum += it;
        }
        else
        {
            oddsum += it;
        }
    }
    if (evensum > oddsum)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
        helper();
    return 0;
}