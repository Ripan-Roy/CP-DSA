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
        vector<ll> arr(n);
        ll count1 = 0;
        ll count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count1 == 0 || count2 == 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            if (count1 == count2)
            {
                cout << "YES"
                     << "\n";
            }
            else if (abs(count1 - count2) > 2)
            {
                cout << "NO"
                     << "\n";
            }
            else if (abs(count1 - count2) == 2)
            {
                if (count1 % 2 == 0)
                {
                    cout << "YES"
                         << "\n";
                }
                else
                {
                    cout << "NO"
                         << "\n";
                }
            }
            else
            {
                cout << "YES"
                     << "\n";
            }
        }
    }

    return 0;
}