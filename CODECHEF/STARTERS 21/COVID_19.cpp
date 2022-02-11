#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i][j]=0;
            }
        }
        for(int i=1;i<=n;i=i+2){
            for(int j=1;j<=n;j=j+2){
                arr[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}