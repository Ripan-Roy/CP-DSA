#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    bool counter=false;
    vector<string> arr;
    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    for(auto k:arr){
        if(str[0]==k[0] || str[1]==k[1]){
            counter=true;
            break;
        }
    }
    if(counter){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}