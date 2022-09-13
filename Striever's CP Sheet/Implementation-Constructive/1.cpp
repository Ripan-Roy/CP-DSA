#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int num=0;
    while(t--){
        string str;
        cin>>str;
        if(str.find('+')!=string::npos){
            num++;
        }
        else if(str.find('-')!=string::npos){
            num--;
        }
    }
    cout<<num;
    return 0;
}