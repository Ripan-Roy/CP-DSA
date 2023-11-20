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
    int n;
    cin >> n;
    int a = 0, b = 0;
    int flag = 0;
    int ten = 1;
    string str = to_string(n);
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        int x = str[i] - '0';
        if (x % 2 == 0)
        {
            a *= 10;
            b *= 10;
            a += x / 2;
            b += x / 2;
        }
        else
        {
            if (flag == 0)
            {
                a *= 10;
                b *= 10;
                a += (x / 2) + 1;
                b += x / 2;
            }
            else
            {
                a *= 10;
                b *= 10;
                a += x / 2;
                b += (x / 2) + 1;
            }
            flag = 1 - flag;
        }
        n /= 10;
    }
    cout << a << " " << b << "\n";
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