#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D;
    int sum1,sum2;
    int t;
    cin>>t;
    while (t--){
        cin>>A>>B>>C>>D;
        if(A>=B){
            B=B+C;
        }
        else{
            A=A+C;
        }
        if(A>=B){
            B=B+D;
        }
        else{
            A=A+D;
        }

        if(A>=B){
            cout<<"N\n";
        }
        else{
            cout<<"S\n";
        }
    }
    return 0;
}