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

void helper()
{
    ll n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    ll count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            count1++;
        }
    }
    reverse(str1.begin(), str1.end());
    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
        {
            count2++;
        }
    }
    reverse(str2.begin(), str2.end());
    if (count1 == 0)
    {
        cout << 0 << "\n";
    }
    else if (count2 == 0)
    {
        cout << 2 << "\n";
    }
    else
    {
        ll mod1 = count1 % 2;
        ll mod2 = count2 % 2;
        cout << min(2 * count1 - mod1, 2 * count2 - (1 - mod2)) << "\n";
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