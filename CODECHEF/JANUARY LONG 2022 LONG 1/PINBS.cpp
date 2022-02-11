#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    string str1="10", str2="11";
	    
	    if( str.find(str1)!=string::npos || str.find(str2)!=string::npos ){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
