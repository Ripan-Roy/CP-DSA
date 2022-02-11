#include <bits/stdc++.h>
using namespace std;
long long int solve(long long n){
    long long num = 0,count = 0;
    while(n){
        if(n%2 == 0){
            num = num + (1L<<count);
        } 
        n = n/ 2;
        if(n <= 0){
            break;
        } 
        count++;
    }
    return num;
}
int main(){
    int t; 
    cin>>t;
    while (t--){
        long long n; 
        cin>>n;
        long long ans = 0;
        while(n > 0){
            long long a = solve(n);
            long long b = n;
            if((b&(b+1)) == 0){
                b--;
            } 
            long long val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans = ans+(val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}