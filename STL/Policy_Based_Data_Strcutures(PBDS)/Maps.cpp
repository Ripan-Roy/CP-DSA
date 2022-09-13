#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    //Key->int , value->float
    map<int, float> mp;

    mp[2]=3;
    mp[1]=4.2;
    mp[6]=7.8;


    //key->int, value->int
    unordered_map<int, int> ump;
    ump[2]=2;
    ump[9]=7;
    ump[3]=16;

    if(ump.find(2) == ump.end()){
        return 1;
    } else{
        return 0;
    }

    mp.insert({2, 3.4});

    //how to loop

    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}