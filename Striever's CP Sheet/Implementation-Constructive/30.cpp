#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int last=n;
        long long int end=n-1;
        long long int i=1;
        cout<<2<<"\n";
        while(i<n){
            cout<<last<<" "<<end<<"\n";
            last=(last+end+1)/2;
            i++;
            end--;
        }
    }
    return 0;
}