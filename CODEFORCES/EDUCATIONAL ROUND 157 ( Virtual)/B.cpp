#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const ll mod = 1e9 + 7;


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
    vector<ll> arr(2*n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    // 10 10 20 20 30 30 
    // 10 20 30
    //abs(10-20) = 10

    //1 5 10 15
    sort(arr.begin(), arr.end());
    ll ans = INT_MAX;
    
    
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}