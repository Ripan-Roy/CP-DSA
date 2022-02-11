#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,a;
        cin>>n>>x;
        string str;
        cin>>str;
        string str1;
        for(int i=0;i<n;i++){
            a=(int)str[i]-48;
            str1.push_back(a^1);
        }       
        cout<<str1;

    }
    return 0;
}