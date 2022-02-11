#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans[32]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            for(int j=0;j<32;j++){
                int k = arr[i]>>j;
                if(k&1){
                    ans[j]++;
                }
            }
        }
        ll x=0;
        for(int i=0;i<32;i++){
            if(ans[i]>1){
                x+=pow(2,i);
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}