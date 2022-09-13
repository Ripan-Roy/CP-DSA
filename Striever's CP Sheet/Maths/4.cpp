#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<"\n";
        }
        else{
            int num=(n-3)/x;
            cout<<round(num)+2<<"\n";
        }
    }
    return 0;
}