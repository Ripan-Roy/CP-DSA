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
    ll ones = 0;
    ll zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            ones++;
        }
        else
        {
            zeroes++;
        }
    }
    if (n % 2 == 0)
    {
        if(ones % 2 > 0 && zeroes % 2 > 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }
    else
    {
        cout << "YES" << "\n";
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