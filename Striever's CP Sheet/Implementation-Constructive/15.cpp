#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total=(w*(k+w*k))/2;
    if(total>n){
        cout<<total-n;
    }
    else{
        cout<<0;
    }
    return 0;
}