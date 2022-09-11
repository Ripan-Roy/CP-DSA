#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<bool> arr(n);
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           arr[x]=true;
       } 
       for(int i=1;i<=4;i++){
           arr[i*7] = true;
           arr[7*i-1] = true;
       }
       int count=0;
       for(int i=1;i<31;i++){
           if(arr[i]){
               count++;
           }
       }
       cout<<count<<"\n";

    }

    return 0;
}