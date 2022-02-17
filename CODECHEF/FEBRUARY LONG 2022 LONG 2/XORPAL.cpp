#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int zeroes=0,ones=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                zeroes++;
            }
            else{
                ones++;
            }
        }
        if(zeroes==ones){
            cout<<"YES\n";
        }
        else if(zeroes%2==1 && ones%2==1){
            cout<<"NO\n";
        }
        else if(zeroes%2==1 && ones%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"YES\n";
        }        
    }
    return 0;
}