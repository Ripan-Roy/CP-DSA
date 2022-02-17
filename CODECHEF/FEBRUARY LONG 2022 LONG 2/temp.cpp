#include<bits/stdc++.h>
using namespace std;

int main(){
    int ts=1;
    int te;
    cin>>te;
    while(ts<=te){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int prefSum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            prefSum=prefSum+arr[i];
        }
        cout<<"Case #"<<ts<<": "<<prefSum % m<<"\n";
        ts++;
    }
    return 0;
}