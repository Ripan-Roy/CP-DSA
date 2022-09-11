#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int main(){
    int t,n,m,x,y,p,q;
    cin>>t;
    while(t--){
        for(int i=0;i<a.size();i++){
            a[i]=0;
        }
        cin>>n>>m;
        if(m%2==0){
            for(int i=0;i<n;i++){
                cin>>x>>y;
            }
            cout<<1<<"\n";
            for(int i=0;i<n;i++){
                cout<<1<<"\n";
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<m;i++){
                cin>>x>>y;
                a[x-1]++; a[y-1]++;
                p=x-1; 
                q=y-1;
            }
            int j=-1;
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    j=i;
                    break;
                }
            }
            if(j!=-1){
                cout<<2<<"\n";
                for(int i=0;i<n;i++){
                    if(i!=j){
                        cout<<1<<" ";
                    }
                    else{
                        cout<<2<<" ";
                    }
                }
                cout<<"\n";
            }
            else{
                cout<<3<<'\n';
                for(int i=0;i<n;i++){
                    if(i==p){
                        cout<<2<<" ";
                    }
                    else if(i==q){
                        cout<<3<<" ";
                    }
                    else{
                        cout<<1<<" ";
                    }
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}