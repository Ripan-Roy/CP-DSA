#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        map<int,set<pair<int,int>>> m;
        for(int i=0;i<n;i++){
            int arr,dep,comp;
            cin>>arr>>dep>>comp;
            m[comp].insert({dep,arr});
        }
        int maxCount=0;
        for(auto innerMap: m){
            int lastCustomerDepTime=0;
            for(auto innerPair: innerMap.second){
                if(innerPair.second>= lastCustomerDepTime){
                    maxCount++;
                    lastCustomerDepTime=innerPair.first;
                }
            }
        }
        cout<<maxCount<<"\n";
    }
    return 0;
}