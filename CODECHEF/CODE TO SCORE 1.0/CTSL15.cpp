#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;
    if(A+B+C+D<=E){
        cout<<4;
    }
    else if(A+B+C<=E || A+B+D<=E || A+C+D<=E || B+C+D<=E){
        cout<<3;
    }
    else if(A+B<=E || A+C<=E || A+D<=E || B+C<=E || B+D<=E || C+D<=E){
        cout<<2;
    }
    else if(A==E || B==E || C==E ||D==E){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;

}