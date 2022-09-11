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
        int count=0;
        for(int i=0;i<n-1;i++){
            if(str[i+1]!=str[i]){
                count++;
            }
        }
        cout<<count+1<<"\n";
    }
    return 0;
}