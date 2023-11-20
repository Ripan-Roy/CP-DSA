#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const int mod = 1e9 + 7;
const int N = 2e5 + 5;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int findPos(string &str)
{
    int s = 0, e = str.size() - 1;
    while(s < e)
    {
        if(str[s] == str[e])
        {
            if(str[s] == '0')
            {
                return e + 1;
            }
            else
            {
                return s;
            }
        }
        s++;
        e--;
    }
    return -1;
}

bool check(string &str)
{
    ll n = str.size();
    ll i = 0, j = n - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void helper()
{
    ll n;
    cin >>n;
    string str;
    cin >> str;
    if(n %2 == 1)
    {
        cout << "-1\n";
        return;
    }
    unordered_map<char, ll> mp;
    for (auto it : str)
    {
        mp[it]++;
    }
    if(abs(mp['0'] - mp['1']) > 1)
    {
        cout << "-1\n";
        return;
    }
    vector<ll> stp;
    while(stp.size() < 300)
    {
        int insert = findPos(str);
        if(insert == -1)
        {
            break;
        }
        stp.push_back(insert);
        str.insert(insert, "01");
    }
    cout << stp.size() << "\n";
    for(auto it : stp)
    {
        cout << it  << " ";
    }
    cout << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }

    return 0;
}
