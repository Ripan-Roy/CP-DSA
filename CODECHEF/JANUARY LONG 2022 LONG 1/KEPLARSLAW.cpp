#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int t1, t2, r1, r2;
        cin>>t1>>t2>>r1>>r2;
        double rat1, rat2;
        rat1= pow(t1,2)/pow(r1,3);
        rat2= pow(t2,2)/pow(r2,3);
        if(rat1==rat2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}