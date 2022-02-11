#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    map<string, list<int>> myMap;
    int key1,key2,key3;
    string x;
    for(int i=0;i<t;i++){
        cin>>x;
        cin>>key1>>key2>>key3;
        myMap.insert({x,{key1,key2,key3}});
    }
    



    return 0;

}