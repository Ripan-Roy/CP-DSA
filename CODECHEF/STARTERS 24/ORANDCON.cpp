#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=x,b=0,c=x;
        for(int i=0;i<31;i++){
            if(!(c&(1<<i))){
                c=c|(1<<i);
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    return 0;
}