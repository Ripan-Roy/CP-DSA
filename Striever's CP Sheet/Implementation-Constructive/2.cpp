#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int first=str[0]-'0';
    if(first==9){
        str[0]='9';
    }
    else{
        if(first>4){
            str[0] = (9-first)+'0';
        }
    }

    for(int i=1;i<str.length();i++){
        int ans=str[i]-'0';
        if(ans<5 || ans==0){
            continue;
        }
        else{
            str[i] = (9-ans)+'0';
        }
    }
    cout<<str;
    return 0;
}