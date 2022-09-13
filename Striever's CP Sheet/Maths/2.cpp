#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l*2>r){
            cout<<-1<<" "<<-1;
            cout<<"\n";
        }
        else{
            cout<<l<<" "<<2*l;
            cout<<"\n";
        }
    }
    return 0;
}