#include<bits/stdc++.h>
using namespace std;

bool isPossible(int h, vector<int> arr){
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=h){
            count++;
        }
    }
    if(count>=h){
        return true;
    }
    else return false;
}

int main(){
    int ts=1,te;
    cin>>te;
    while(ts<=te){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        
        cout<<"Case #"<<ts<<": ";
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
            for(int h=i+1;h>=1;h--){
                if(isPossible(h,arr)){
                    cout<<h<<" ";
                    break;
                }
            }
        }
        cout<<"\n";
        ts++;
    }
    return 0;
}