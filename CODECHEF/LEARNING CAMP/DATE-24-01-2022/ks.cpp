#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    //Adjacency Matrix
    int M[m+1][n+1];

    // Input Format
    //u v

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        M[u][v]=M[v][u]=1;
    }


    // Adjacency list
    vector<vector<pair <int,int>>> G(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }


    return 0;

}