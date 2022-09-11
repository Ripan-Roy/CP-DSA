#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,c;
        cin>>a>>c;
        cout<<c/__gcd(a,c)<<"\n";
    }
    return 0;
}