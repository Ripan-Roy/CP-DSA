#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    string str;
    cin >> str;
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << 0 << "\n";
        return;
    }

    for (auto x : str)
    {
        if (x == 'N')
        {
            count++;
        }
    }
    if (count == n || count == 0)
    {
        cout << -1 << "\n";
        return;
    }
    vector<int> arr2 = arr;
    sort(arr.begin(), arr.end());
    int first = INT_MAX, last = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr2[i])
        {
            first = min(i, first);
            last = max(last, i);
        }
    }
    bool counter1 = false, counter2 = false;
    for (int i = 0; i < first; i++)
    {
        if (str[i] != str[last])
        {
            counter1 = true;
        }
    }
    for (int i = last; i < n; i++)
    {
        if (str[i] != str[first])
        {
            counter2 = true;
        }
    }
    if (str[first] != str[last] || counter1 || counter2)
    {
        cout << 1;
    }

    else
    {
        cout << 2;
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}