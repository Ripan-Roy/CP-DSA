#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> arr;
    for(int i=0;i<str.size();i++){
        if(str[i]!='+'){
            arr.push_back((str[i])-'0');
        }
    }
    if(arr.size()==1){
        cout<<arr[0];
    }
    else{
        sort(arr.begin(),arr.end());
        cout<<arr[0]<<"+";
        for(int i=1;i<arr.size()-1;i++){
            cout<<arr[i]<<"+";
        }
        cout<<arr.back();
        }
    return 0;
}