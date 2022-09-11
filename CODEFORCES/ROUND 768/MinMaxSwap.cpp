#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr1(n), arr2(n);
        for(int i=0;i<arr1.size();i++){
            cin>>arr1[i];
        }
        for(int i=0;i<arr2.size();i++){
            cin>>arr2[i];
            if(arr1[i]<arr2[i]){
                int curr=arr1[i];
                arr1[i]=arr2[i];
                arr2[i]=curr;
            }
        }
        int ans = (*max_element(arr1.begin(), arr1.end()))*(*max_element(arr2.begin(), arr2.end()));
        cout<<ans<<"\n";
    }    
    return 0;
}
