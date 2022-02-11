#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1 && k==1){
            cout<<1<<"\n";
        }
        else{
            if(n==1||k==1){
                cout<<-1<<"\n";
            }
            else{
                int temp;
                for(int i=1;i<=k-1;i++){
                    cout<<i<<" ";
                    temp=i-1;
                }
                for(int i=0;i<n-temp-1;i++){
                    cout<<n-i<<" ";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}