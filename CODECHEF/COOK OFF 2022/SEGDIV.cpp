#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=3,y=2;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<y<<" ";
                y=y+2;
            }
            else{
                cout<<x<<" ";
                x=x+2;
            }
        }
        cout<<"\n";
    }
    return 0;

}