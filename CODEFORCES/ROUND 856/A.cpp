#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isPalindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

void helper()
{
    ll n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        string s;
        cin >> s;
        if(s.length() == n - 1)
        {
            v.push_back(s);
        }
    }
    string str1 = "";
    string str2 = "";
    str1 += v[0] + v[1];
    str2 += v[1] + v[0];
    // cout << str1 << " " << str2 << endl;

    if(isPalindrome(str1) || isPalindrome(str2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    
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