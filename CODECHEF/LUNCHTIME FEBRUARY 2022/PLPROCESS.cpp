#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        vector<lli> arr(n),pre(n);
        lli prefSum = 0;
        for (lli i = 0; i < n; i++)
        {
            lli x;
            cin >> arr[i];
            prefSum+=arr[i];
            pre[i]=prefSum;
        }
        lli ans=prefSum;
        for(int i=0;i<n;i++){
            ans=min(max(pre[i],prefSum-pre[i]),ans);
        }
        cout<<ans<<"\n";
    }

    return 0;
}