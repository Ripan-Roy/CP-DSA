#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][i]=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][i]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}