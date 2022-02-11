#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<string> str;
    for(auto i: arr){
        str.insert(i);
    }
    cout<<str.size();

    return 0;

}