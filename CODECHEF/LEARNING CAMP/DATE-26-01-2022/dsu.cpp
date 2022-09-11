#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> id,sz;

//returns the leader of u and also does path compression
int root(int u){
    if(id[u]==u){
        return u;
    } 
    return id[u]=root(id[u]);
}

//checks if u and v are in the same componenet or not
bool same_comp(int u, int v){
    return root(u)==root(v);
}

//merges u and v if they are in different componenets
void merge(int u, int v ){
    u=root(u);
    v=root(v);
    if(u==v){
        return;
    }
    else{
        if(sz[u]<sz[v]){
            swap(u,v);
        }
        id[v]=u;
        sz[u]+=sz[v];
    }
}

int main(){
    int n,q;
    cin>>n>>q;
    id.resize(n+1);
    sz.resize(n+1);
    for(int i=1;i<=n;i++){
        id[i]=i;
    }
    while(q--){
        int t,u,v;
        cin>>t>>u>>v;

        if(t==1){
            merge(u,v);
        }
        else{
            if(same_comp(u,v)){
                cout<<"Same\n";
            }
            else{
                cout<<"Diff\n";
            }
        }
    }
    return 0;
}