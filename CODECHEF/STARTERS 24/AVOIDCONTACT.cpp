#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        if(a>0&&b==0){
            cout<<a<<"\n";
        }
        else if(a==b){
            cout<<(b*2)-1<<"\n";
        }
        else{
            int d=(b*2)+(a-b);
            cout<<d<<"\n";
        }
    }
    return 0;
}