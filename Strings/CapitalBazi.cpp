//Hacker Earth contest

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            cout<<(char)(s[i]-32);
        }
        else{
            cout<<"\n";
        }
    }

    return 0;

}