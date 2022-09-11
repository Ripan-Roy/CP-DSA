#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != str[i - 1])
            {
                count += i + 1;
            }
            else
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}