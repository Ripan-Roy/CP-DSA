#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
vector<string> ans;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void permute(string &a, int l, int r)
{
    if (l == r)
    {
        ans.push_back(a);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

string Reverse(string str)
{
    string ans = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        ans += str[i];
    }
    return ans;
}

void helper()
{
    string str;
    cin >> str;
    permute(str, 0, str.length() - 1);
    string sol = "";
    for (int i = 0; i < ans.size(); i++)
    {
            string temp = ans[i];
            string temp2 = Reverse(temp);
            if (temp < temp2)
            {
                if (sol == "")
                {
                    sol = temp;
                }
                else
                {
                    if (temp < sol)
                    {
                        sol = temp;
                    }
                }
        }
        else
        {
            if (sol == "")
            {
                sol = temp2;
            }
            else
            {
                if (temp2 < sol)
                {
                    sol = temp2;
                }
            }
        }
    }
    cout << sol << "\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}