#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        lli sum = 1;
        for(int i=1;i<=d;i++){
            if(i<=10){
                sum = sum*2;
                if(sum>n){
                    sum=n;
                    break;
                }
            }
            else{
                sum=sum*3;
                if(sum>n){
                    sum = n;
                    break;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}