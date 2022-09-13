#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto it = arr.begin(); it <= arr.end(); it++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int p;
    cin >> p;
    int a, b;
    vector<set<int>> idx(p);
    for (int i = 0; i < p; i++)
    {
        cin >> a >> b;
        if (idx[i].find(a) != idx[i].end() || idx[i].find(b) != idx[i].end())
        {
            idx[i].insert({a, b});
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (auto it : idx[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}