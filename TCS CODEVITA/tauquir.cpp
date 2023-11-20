#include <bits/stdc++.h>
#define ll long long int
using namespace std;


const ll MOD = 1e9+7;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)



int main(){
   
    vector<ll> arr;
    ll q = INT_MAX;
    ll m = 1e7;
    vector<ll> prime(m, 1);
    ll start = 0;
    ll input;
    while(cin>>input)
    {
        arr.push_back(input);
        if(q>input)
        {
            q = input;
        }
        start = max(start, input);
    }
    ll n = arr.size();
    prime[0]=0;
    prime[1]=0;

    for(ll p = 2; p*p<m; p++)
    {
        if(prime[p]==1)
        {
            for(ll i = p*p; i<m; i+=p)
                prime[i]=0;
        }
    }
   
    ll ans = -1;
    for(ll p = start+1; p<m; p++)
    {
        if(prime[p])
        {
            ll cnt = 0;
            for(ll i = 0; i<n; i++)
            {
               
                if(arr[i]!=q && p%arr[i]==q)
                    cnt++;

            }
            if(cnt==n-1)
            {
                ans = p;
                break;
            }
        }
    }
    if(ans!=-1)
        cout<<ans;
    else
        cout<<"None";



    return 0;
}