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

ll longestSubstringofOne(string str)
{
    ll count = 0;
    ll result = 0;
    for (ll i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            count++;
            result = max(result, count);
        }
        else
        {
            count = 0;
        }
    }
    return result;
}
ll longestSubstringofZero(string str)
{
    ll count = 0;
    ll result = 0;
    for (ll i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            count++;
            result = max(result, count);
        }
        else
        {
            count = 0;
        }
    }
    return result;
}

void helper()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll zeroes = 0;
    ll ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            zeroes++;
        }
        else
        {
            ones++;
        }
    }
    ll case1 = zeroes * ones;   // x>0 && y>0
    ll case2 = zeroes * zeroes; // x>0 && y==0
    ll case3 = ones * ones;     // x==0 && y>0
    
    // if(str.length() == 1)
    // {
    //     cout << 1 << "\n";
    // }
    // else if(isSorted(str))
    // {
    //     if(zeroes > ones)
    //     {
    //         cout << case2 << "\n";
    //     }
    //     else if(ones > zeroes)
    //     {
    //         cout << case3 << "\n";
    //     }
    // }
    // else
    // {
    //     cout << case3 << "\n";
    // }

    ll str1 = longestSubstringofOne(str);
    ll str0 = longestSubstringofZero(str);
    ll maxE = max(pow(str1, 2), pow(str0, 2));
    ll ans = max(maxE, case1);
    cout << ans << "\n";
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