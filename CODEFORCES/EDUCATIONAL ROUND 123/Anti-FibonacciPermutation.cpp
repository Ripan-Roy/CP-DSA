#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3){
            cout<<3<<" "<<2<<" "<<1<<"\n";
            cout<<1<<" "<<3<<" "<<2<<"\n";
            cout<<3<<" "<<1<<" "<<2<<"\n";
        }
        else{
            vector<int> arr(n);
            for(int i=0;i<n;i++){
                int temp=arr[0];
                for(int j=1;j<n;j++){
                    arr[j-1]=arr[j];
                    cout<<arr[j-1]<<" ";
                }
                arr[n-1]=temp;
                cout<<temp;
                cout<<"\n";
            }
        }
    }
    return 0;
}