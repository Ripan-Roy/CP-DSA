#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long    
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((arr[i]+arr[j])>=(arr[i]*arr[j]))
                {
                    count++;
                }
            }
        }
        cout << count <<"\n"; 
    }
    return 0;
}