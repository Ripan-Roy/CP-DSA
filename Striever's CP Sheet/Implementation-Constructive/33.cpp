#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m%n==0){
        int rem=m/n;
        int count=0;
        if(rem!=0){
            while(rem%2==0){
                count++;
                rem/=2;
            }
            while(rem%3==0){
                count++;
                rem/=3;
            }
            if(rem!=1){
                count=-1;
            }
        }
        cout<<count;
    }
    else{
        cout<<-1;
    }

    return 0;
}