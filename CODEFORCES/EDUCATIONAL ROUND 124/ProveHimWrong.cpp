#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        if(n>19){
            cout<<"NO\n";
            continue;
        }
        else{
            cout<<"YES\n";
        }
        for(int i=0;i<n;i++){
            arr[i]=pow(3,i);
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}