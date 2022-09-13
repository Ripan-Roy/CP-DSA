#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    str[0]=putchar(toupper(str[0]));
    str.erase(0,1);
    cout<<str;
    return 0;

}