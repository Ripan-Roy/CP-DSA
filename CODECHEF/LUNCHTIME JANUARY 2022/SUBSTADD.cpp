#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n, x, y;
        cin>>n>>x>>y;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++){
            cin>>arr1[i];
        }
        for (int i = 0; i < n; i++){
            cin>>arr2[i];
        }
        int ans = 1;
        for (int i = 0; i < n; i++){
            if ((arr2[i] - arr1[i] != x) && (arr2[i] - arr1[i] != y)){
                ans = 0;
                break;
            }
        }
        if (ans == 0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}