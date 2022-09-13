#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    bool c = false;
    vector<int> v;
    string s, str, ans = "";
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    if (n == 1)
        cout << s;
    else
    {
        int j = 0;
        for (auto k : v)
        {
            if (k % n == 0)
            {
                int temp = k / n;
                while (temp--)
                {
                    str += s[j];
                }
                j += k;
            }
            else
            {
                c = true;
                break;
            }
        }
        if (c)
            cout << -1;
        else
        {
            while (n--)
            {
                ans += str;
            }
            cout << ans;
        }
    }
    return 0;
}