// Print All Duplicates In An Input String
// Link - https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
T.C - O(n)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << "count = " << it.second << "\n";
        }
    }
    return 0;
}