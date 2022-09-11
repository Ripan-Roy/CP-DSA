#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == str2[i])
            {
                continue;
            }
            else
            {
                mp[str2[i]]++;
            }
        }
        ll size = mp.size();
        cout << size << "\n";
    }
    return 0;
}