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
    string str;
    cin >> str;
    ll countZero = 0;
    ll countOne = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '0')
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }
    if(n == 1)
    {
        cout << "YES\n";
        return;
    }
    bool counter = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(str[i] == str[i + 1])
        {
              counter |= true;
        }
        else
        {
            counter |= false;
        }
    }
    if(counter)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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