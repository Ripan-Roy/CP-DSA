#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
		cin >> str;
		int digit = str[0] - '0' - 1;
		int length = str.size();
		cout << digit * 10 + length * (length + 1) / 2 <<"\n";
    }
    return 0;
}