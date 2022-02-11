#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans=0;
        if(n==3){
            cout<<"10\n";
        }
        else if(n>3){
            ans=pow(3,(n-3))*8*(n-2);
            ans=ans+ans/4;
            cout<<ans<<"\n";
        }
        else{
            cout<<"0\n";
        }
    }
    return 0;
}