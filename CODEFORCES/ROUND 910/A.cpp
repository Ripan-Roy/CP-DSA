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
    ll n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    ll bCount = 0;
    for (auto it : str)
    {
        if (it == 'B')
        {
            bCount++;
        }
    }
    ll aCount = n - bCount;
    if (k == bCount)
    {
        cout << 0 << "\n";
    }
    else if (k > bCount)
    {
        ll rem = k - bCount;
        cout << 1 << "\n";
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'A')
            {
                rem--;
            }
            if (rem == 0)
            {
                cout << i + 1 << " "
                     << "B\n";
                break;
            }
        }
    }
    else
    {
        ll rem = bCount - k;
        cout << 1 << "\n";
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {
                rem--;
            }
            if (rem == 0)
            {
                cout << i + 1 << " "
                     << "A\n";
                break;
            }
        }
    }
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
