#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int Z,Y,A,B,C;
        cin>>Z>>Y>>A>>B>>C;
        if(A+B+C<=Z-Y){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}