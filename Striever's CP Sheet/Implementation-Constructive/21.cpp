#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1,maxLength=1;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
            if(maxLength<count){
                maxLength=count;
            }
        }
        else{
            count=1;
        }
    }
    cout<<maxLength<<"\n";
    return 0;
}