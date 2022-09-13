#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,n1,np;
    cin>>n>>k>>l>>c>>d>>p>>n1>>np;
    int totalDrinks = k*l;
    totalDrinks = totalDrinks/n1;
    int totalSlices = c*d;
    int totalSalt = p/np;
    int ans = min(min(totalDrinks, totalSlices),totalSalt)/n;
    cout<<ans;
    return 0;
}