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
    string str;
    cin >> str;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll temp = 0;
    ll ans = INT_MIN;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == '1')
        {
            temp += max(arr[i], ans);
        }
        if (str[i] == '0' || arr[i] < temp)
        {
            ans = arr[i];
        }
    }
    cout << temp << "\n";
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
