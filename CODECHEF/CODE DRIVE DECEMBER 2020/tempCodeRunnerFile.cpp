#include<bits/stdc++.h>
using namespace std;

int main(){
    int A=0,B=0,C=0,D=0;
    int t;
    cin>>t;
    while (t--){
        cin>>A>>B>>C>>D;
        if(A>B){
            B=B+C;
            if(A>B){
                B=B+D;
            }
            else{
                A=A+C;
                if(A<B){
                    A=A+D;
                }
            }
        }
    while(t--){
        if(A>B){
            cout<<"N"<<endl;
        }
        else{
            cout<<"S"<<endl;
        }
    }

    return 0;
}