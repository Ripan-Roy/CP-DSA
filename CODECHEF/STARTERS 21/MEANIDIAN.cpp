#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=arr[i]+1;
        }
        sort(arr.begin(),arr.end());
        int sum = accumulate(arr.begin(),arr.end(),0);
        int mean = sum/arr.size();
        int median;
        if(arr.size()%2==0){
            median=arr[arr.size()/2];
        }
        else{
            median=arr[(arr.size()+1)/2];
        }

        if(mean==median){
            cout<<0<<"\n";
        }

        else{
            
        }


    }


    return 0;
}