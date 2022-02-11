#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;


void input(vl &v,ll n){
    for(ll i=0; i<n; i++)cin>>v[i];
}

ll length(vector<ll>& a){
    ll n = a.size();
    vector<ll> len;
    for(ll i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    vl a(n),b(m);
    input(a,n);
    input(b,m);
    ll var1=1,var2=1;
    var1 = length(a);
    var2 = length(b);
    cout<<var1+var2<<"\n";
}

int main(){

    ll t = 1;
    cin>>t;


    while(t--){
        solve();
    }
    return 0;
}