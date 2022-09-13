#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    int turn;
    cin>>a>>b>>n;
    int total=0;
    if(a>b) turn=1;
    else turn = 0;
    while(a<=n && b<=n){
        if(turn%2==0){
            a+=b;
            turn++;
            total++;
        }
        else{
            b+=a;
            turn++;
            total++;
        }
    }
    cout<<total<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}