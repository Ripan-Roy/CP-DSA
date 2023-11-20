#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<pair<char, int>> arr;
    for (int i = 0; i < n; i++)
    {
        char c;
        int x;
        cin >> c >> x;
        arr.push_back({c, x});
    }
    unordered_map<char, int> mp;
    mp['A'] = INT_MAX;
    mp['B'] = INT_MAX;
    mp['C'] = INT_MAX;

    for (auto i : arr)
    {
        if (i.first == 'A')
        {
            mp['A'] = min(mp['A'], i.second);
        }
        else if (i.first == 'B')
        {
            mp['B'] = min(mp['B'], i.second);
        }
        else if (i.first == 'C')
        {
            mp['C'] = min(mp['C'], i.second);
        }
    }
    int ans = min(mp['A'] + mp['B'], mp['C']);
    cout << ans << endl;
    return 0;
}