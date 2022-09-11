#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int key1,key2,key3;
        int door1,door2,door3;
        for(int i=0;i<6;i++){
            if(str[i]=='r') key1=i;
            else if(str[i]=='g') key2=i;
            else if(str[i]=='b') key3=i;
            else if(str[i]=='R') door1=i;
            else if(str[i]=='G') door2=i;
            else if(str[i]=='B') door3=i;
        }
        if(key1<door1 && key2<door2 && key3<door3){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}