#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> arr;
    for(int i=0;i<17;i++){
        for(int j=i+1;j<18;j++){
            for(int k=j+1;k<19;k++){
                for(int l=k+1;l<20;l++){
                    long long ans=(1<<l)+(1<<k)+(1<<j)+(1<<i);
                    arr.push_back(ans);
                }
                if(arr.size()==1000){
                    break;
                }
            }
            if(arr.size()==1000){
                break;
            }
        }
        if(arr.size()==1000){
            break;
        }
    }

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}