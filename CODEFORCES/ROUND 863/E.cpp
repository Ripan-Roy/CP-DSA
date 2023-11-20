#include <bits/stdc++.h>
#include <vector>
using namespace std;

int ii()
{
    int n;
    cin >> n;
    return n;
}

vector<int> ai()
{
    vector<int> v;
    string s;
    getline(cin, s);
    int i = 0;
    while (i < s.length())
    {
        int j = i;
        while (j < s.length() && s[j] != ' ')
        {
            j++;
        }
        v.push_back(stoi(s.substr(i, j - i)));
        i = j + 1;
    }
    return v;
}

int base9(int x)
{
    vector<int> digits;
    int base9_int = 0;
    while (x > 0)
    {
        digits.push_back(x % 9);
        x /= 9;
    }
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        base9_int = base9_int * 10 + digits[i];
    }
    return base9_int;
}

int main()
{
    int t = ii();
    while (t--)
    {
        int n = ii();
        int base9_n = base9(n);
        string s = to_string(base9_n);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '8')
            {
                s[i] = '9';
            }
            else if (s[i] == '7')
            {
                s[i] = '8';
            }
            else if (s[i] == '6')
            {
                s[i] = '7';
            }
            else if (s[i] == '5')
            {
                s[i] = '6';
            }
            else if (s[i] == '4')
            {
                s[i] = '5';
            }
        }
        cout << s << endl;
    }
    return 0;
}
