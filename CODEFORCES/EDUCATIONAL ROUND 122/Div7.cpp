#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        if(n==0){
            cout<<7<<"\n";
            continue;
        }
        if(n%7==0){
            cout<<n<<"\n";
        }
        else{
            n=n/10;
            n=n*10;
            for(int i=0;i<=9;i++){
                sum = n+i;
                if(sum%7==0){
                    break;
                }
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}