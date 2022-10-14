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
    ll num;
    cin >> num;

    \
    if (num == 2)
    {
        cout << 2 << " " << 1 << "\n";
    }
    else if (num == 3)
    {
        cout << -1 << "\n";
    }
    else if (num == 4)
    {
        cout << 4 << " " << 3 << " " << 1 << " " << 2 << "\n";
    }
    else
    {
        for (int i = num; i > num / 2 + 1; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= num / 2 + 1; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
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