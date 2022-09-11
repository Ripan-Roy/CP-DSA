#include <bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T>
bool allEqual(vector<T> const &v)
{
    return adjacent_find(v.begin(), v.end(), not_equal_to<T>()) == v.end();
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll sum(vector<ll> arr)
{
    ll ans = 0;
    for(auto it : arr)
    {
        ans += it;
    }
    return ans;
}
int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        
    }
    return 0;
}