#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++){
            cin>>b[i];
            arr.push_back(make_pair(a[i],b[i]));
        }
        sort(arr.begin(),arr.end());
        int count=k;
        for(int i=0;i<n;i++){
            if(arr[i].first<=count){
                count+=arr[i].second;
            }
            else if(arr[i].first>count){
                break;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}