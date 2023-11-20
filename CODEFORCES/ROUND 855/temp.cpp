
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << s << endl;
        vs.push_back(s);
    }
    for (auto it : vs)
    {
        cout << it << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
