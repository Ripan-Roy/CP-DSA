#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<=n;i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}