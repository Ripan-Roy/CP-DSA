#include <bits/stdc++.h>
using namespace std;

bool check(unordered_map<char, int> &mp)
{
    for (auto it : mp)
    {
        if (it.second > 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    unordered_map<char, int> mp;
    for (auto it : t)
    {
        mp[it]++;
    }
    int left = 0, minLen = INT_MAX;
    string minWindow = "";

    for (int right = 0; right < n; right++)
    {
        if (mp.find(s[right]) != mp.end())
        {
            mp[s[right]]--;
        }

        while (check(mp))
        {
            if (right - left + 1 < minLen)
            {
                minLen = right - left + 1;
                minWindow = s.substr(left, minLen);
            }

            if (mp.find(s[left]) != mp.end())
            {
                mp[s[left]]++;
            }

            left++;
        }
    }
    cout << minWindow << endl;
    return 0;
}
