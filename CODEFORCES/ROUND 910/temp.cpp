#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    ll n = str1.size();
    ll m = str2.size();
    sort(str2.rbegin(), str2.rend());
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(str1[i] < str2[j])
        {
            swap(str1[i], str2[j]);
            j++;
        }
    }
    cout << str1;
}

int main()
{
    fastIO();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
