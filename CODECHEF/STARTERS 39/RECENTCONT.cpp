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
        vector<string> str(n);
        ll count1 = 0;
        ll count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            if (str[i] == "START38")
                count1++;
            else
                count2++;
        }
        cout << count1 << " " << count2 << "\n";
    }
    return 0;
}