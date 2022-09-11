#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll temp = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                temp ^= i;
            }
        }
        if(temp == 0)
        {
            cout << "COOK\n";
        }
        else
        {
            cout << "CHEF\n";
        }
    }
    return 0;
}