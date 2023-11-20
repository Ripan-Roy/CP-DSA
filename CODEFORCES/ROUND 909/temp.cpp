#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{

}

void helper()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    sort(arr.begin(), arr.end());
    // 4 9 9
    // 
    ll low = 0;
    ll high = n - 1;
    ll ans = 0;
    while(low <= high)
    {   
        if(arr[low] < x)
        {
            arr[low] += abs(x - arr[high]);
        }
        low++;
        high--;
    }
    for(auto it : arr)
    {
        if(it >= x)
        {
            ans++;
        }
    }
    cout << ans << "\n";
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