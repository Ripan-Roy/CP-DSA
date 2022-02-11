#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double ans=pow(0.143*n,n);
        if((ans-floor(ans))<0.5){
            cout<<floor(ans)<<"\n";
        }
        else{
            cout<<floor(ans)+1<<"\n";
        }
    }
    return 0;
}