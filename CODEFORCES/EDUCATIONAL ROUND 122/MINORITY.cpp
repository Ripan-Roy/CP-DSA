#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ones=0,zeros=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(ones>zeros){
            cout<<zeros<<"\n";
        }
        else if(zeros>ones){
            cout<<ones<<"\n";
        }
        else if(zeros==ones){
            if(zeros>1){
                cout<<zeros-1<<"\n";
            }
            else{
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}