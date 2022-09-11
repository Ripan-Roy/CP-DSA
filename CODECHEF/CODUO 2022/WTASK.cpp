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
        vector<ll> arr(7);
        ll sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n > sum)
        {
            n = n % sum;
        }
        ll temp = 0;
        for (int i = 0; i < 7; i++)
        {
            temp += arr[i];
            if (temp >= n)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}