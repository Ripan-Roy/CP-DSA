#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long l, r;
        cin >> l >> r;
        long long ans = 0;
        for(long long i = l; i <= r; i++)
        {
            long long temp = i;
            while(temp > 1)
            {
                temp = floor(log2(temp));
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}