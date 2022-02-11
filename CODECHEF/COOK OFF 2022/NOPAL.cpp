#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        for(int i=0;i<n;i++){
            if(i%3==0){
                str.append("a");
            }
            if(i%3==1){
                str.append("b");
            }
            if(i%3==2){
                str.append("c");
            }
        }
        cout<<str<<"\n";
    }
    return 0;
}