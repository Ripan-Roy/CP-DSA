#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(auto &it: arr){
            cin>>it;
        }
        // sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<x) count=i+1;
        }
        cout<<count<<"\n";
    }

    return 0;
}