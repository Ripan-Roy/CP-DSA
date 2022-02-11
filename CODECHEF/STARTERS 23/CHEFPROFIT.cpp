#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,spent,sell;
        cin>>x>>y>>z;
        spent=x*y;
        sell=x*z;
        cout<<sell-spent<<"\n";
    }
    return 0;
}