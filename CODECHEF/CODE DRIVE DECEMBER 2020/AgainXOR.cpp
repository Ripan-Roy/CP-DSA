#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        string s;
        int ans=0;

        cin>>s;

        int cnt=0;

        for(int i=0;i<n-m;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }

        for(int i=0;i<m;i++){
            if(s[n-m+i]=='1'){
                cnt++;
            }
            if(cnt%2!=0){
                ans++;
            }
            if(s[i]=='1'){
                cnt--;
            }
        }
        cout<<ans<<"\n";

    }

    return 0;
}