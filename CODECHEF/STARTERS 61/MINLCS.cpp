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
    string a, b;
    cin >> a >> b;
    vector<ll> arr1(26, 0), arr2(26, 0);
    for (ll i = 0; i < n; i++)
    {
        arr1[a[i] - 'a']++;
        arr2[b[i] - 'a']++;
    }
    ll count = 0;
    for (int i = 0; i < 26; i++)
    {
        count = max(count, min(arr1[i], arr2[i]));
    }
    cout << count << "\n";
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