#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,x,y;
        cin>>n>>x>>y;
        if((x+y)%2==0){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
        }

    }
    return 0;
}