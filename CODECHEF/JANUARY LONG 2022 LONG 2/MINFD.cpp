#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int prefSum=0,count=false;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr+1, arr + n + 1, greater<int>());
        int j;
        for(j=1;j<=n;j++){
            prefSum=prefSum+arr[j];
            if(prefSum>=x){
                count=true;
            }
            else{
                cout<<-1<<"\n";
            }
        }
        if(cout){
            cout<<j<<"\n";
        } 
        else{
            cout<<-1<<"\n";
        } 
    }
    return 0;
}