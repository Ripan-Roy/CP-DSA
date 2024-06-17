#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string clearStars(string s)
    {
        string str = s;
        int n = str.length();
        priority_queue<char, vector<char>, greater<char>> pq;
        map<char, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                if (!pq.empty())
                {
                    char top = pq.top();
                    pq.pop();
                    int idx = mp[top].back();
                    mp[top].pop_back();
                    str[idx] = '*';
                }
            }
            else
            {
                char ch = s[i];
                auto idx = i;

                pq.push(ch);
                mp[ch].push_back(idx);
            }
        }

        string res = "";
        for (char ch : str)
        {
            if (ch != '*')
            {
                res += ch;
            }
        }
        return res;
    }
};

int main()
{
    Solution solution;
    // Test cases
    cout << solution.clearStars("aaba*") << endl; // Output: "aab"
    cout << solution.clearStars("abc") << endl;   // Output: "abc"
    cout << solution.clearStars("de*") << endl;   // Output: "e"

    return 0;
}
