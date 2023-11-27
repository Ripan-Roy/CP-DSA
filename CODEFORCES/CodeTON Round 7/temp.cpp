#include <bits/stdc++.h> 
using namespace std; 

#define int long long 
#define mod 1000000007 

void solve() 
{ 
    int n,x; 
    cin >> n >> x; 
    vector<vector<int>> a(n); 
    vector<int> b(n); 
    for(int i=0;i<n;i++) 
    { 
        int f; 
        cin >> f; 
        a[i]={f,i}; 
    } 
    for(int i=0;i<n;i++) 
    { 
        cin >> b[i]; 
    } 
    sort(a.rbegin(),a.rend()); 
    sort(b.begin(),b.end()); 
    vector<int> ans(n); 
    int ind=0; 
    for(int i=x-1;i>=0;i--) 
    { 
        if(a[i][0]>b[ind]) 
        { 
            ans[a[i][1]]=b[ind]; 
            ind++; 
        } 
        else 
        { 
            cout << "NO" << endl; 
            return; 
        } 
    } 
    ind=n-1; 
    for(int i=x;i<n;i++) 
    { 
        if(a[i][0]>b[ind]) 
        { 
            cout << "NO" << endl; 
            return; 
        } 
        else 
        { 
            ans[a[i][1]]=b[ind]; 
            ind--; 
        } 
    } 
    cout << "YES" << endl; 
    for(auto &i:ans) 
    { 
        cout << i << " "; 
    } 
    cout << endl; 

} 

int32_t main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 
    int t=1; 
    cin >> t; 
    while(t--) 
    { 
        solve(); 
    } 

    return 0; 
}