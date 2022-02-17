#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            int ans=1+i+count;
            if(ans==arr[i]){
                count++;
            }     
        }
        cout<<count<<"\n";
    }
    return 0;
}   