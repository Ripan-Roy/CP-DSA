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
    ll q;
    cin >> q;
    vector<pair<ll, ll>> arr(q);
    for (ll i = 0; i < q; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    ll score = 0;
    ll plus = 0;
    ll minus = 0;
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '+')
        {
            plus++;
        }
        else
        {
            minus++;
        }
    }
    
}

int main()
{
    fastIO;
    helper();
    return 0;
}