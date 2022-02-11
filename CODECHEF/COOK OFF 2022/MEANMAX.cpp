#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int val=*arr.begin();
    
        int sum=accumulate(arr.begin(),arr.end(),0LL);
        double ans=double(sum-val)/(n-1);
        ans=ans+val;
        cout<<setprecision(12)<<fixed;
        cout<<ans<<'\n';
        }
    return 0;
}