#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int minidx=INT_MAX;
    int maxidx=INT_MIN;
    int minPos,maxPos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=minidx){
            minidx=arr[i];
            minPos=i+1;
        }
        if(arr[i]>maxidx){
            maxidx=arr[i];
            maxPos=i+1;
        }
    }
    int ans;
    if(maxPos>minPos){
        ans=(maxPos-1)+(n-minPos)-1;
    }
    else{
        ans=(maxPos-1)+(n-minPos);
    }
    cout<<ans;
    return 0;

}