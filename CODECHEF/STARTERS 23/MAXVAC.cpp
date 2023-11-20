#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int ans = 0;
        vector<int> v;
        v.push_back(-1);
        int tot = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                tot += (i - v.back() - 1) / x;
                v.push_back(i);
            }
        }
        tot += (n - v.back() - 1) / x;
        v.push_back(n);
        for (int i = 1; i < v.size() - 1; i++)
        {
            int temp = tot - (v[i] - v[i - 1] - 1) / x - (v[i + 1] - v[i] - 1) / x + (v[i + 1] - v[i - 1] - 1) / x;
            ans = max(ans, temp);
        }
        cout << ans << "\n";
    }
    return 0;
}