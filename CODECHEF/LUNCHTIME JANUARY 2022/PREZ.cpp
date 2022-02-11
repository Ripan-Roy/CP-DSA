#include <bits/stdc++.h>
using namespace std;

long long int solve(long long int m, string str){
    long long int ans = 0;
    for(int i=m;i>=0;i--){
        long long int temp = (int(str[i])-int('0')+ans)%10;
        if(temp==0){
            continue;
        }
        ans+=10-temp;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        long long int l=0,r=n-1,ans=0;
        while(l<=r){
            long long int m=(l+r)/2;
            if(solve(m,str)>k){
                r=m-1;
            }
            else{
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}