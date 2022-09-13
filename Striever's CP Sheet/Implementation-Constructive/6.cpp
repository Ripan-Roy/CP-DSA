#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int count=0;
        while(n>0){
            while(n%10==0){
                count++;
                n=n/10;
            }
            if(n%10!=0){
                arr.push_back((n%10)*pow(10,count));
                n=n/10;
                count++;
            }
        }
        cout<<arr.size()<<"\n";
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}