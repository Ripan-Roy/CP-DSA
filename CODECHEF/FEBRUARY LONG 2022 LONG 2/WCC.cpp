#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string str;
        cin>>str;
        int c=0,d=0,n=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='C'){
                c++;
            }
            else if(str[i]=='N'){
                n++;
            }
            else{
                d++;
            }
        }
        int scoreC=(2*c)+(1*d);
        int scoreN=(2*n)+(1*d);
        if(scoreC>scoreN){
            cout<<60*x<<"\n";
        }
        else if(c<n){
            cout<<40*x<<"\n";
        }            
        else{
            cout<<55*x<<"\n";
        }
    }
    return 0;
}