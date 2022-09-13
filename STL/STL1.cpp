#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    int Q,L,R;
    cin>>Q;
    while(Q--){

        //Brute force method; Time complexity = O(nQ)
        /*
        // cin>>L>>R;
        // for(int i=L;i<=R;i++){
        //     arr[i]=arr[i]+1;  
        // }
        // for(int i=0;i<n;i++){
        // cout<<arr[i]<<" ";
        // }cout<<endl;
        */
       
        //Difference Vector Method; Time Complexity = O(n+Q)
        cin>>L>>R;
        arr[L]++;
        if(R+1<n){
            arr[R+1]--;
        }
    }
        for(int i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }

        for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
    
    return 0;
}