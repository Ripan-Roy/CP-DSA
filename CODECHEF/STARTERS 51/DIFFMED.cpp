#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr;
        ll in = n;
        ll en = 1;
        ll mid = (n + 1) / 2;
        while (in > mid || en < mid)
        {
            arr.push_back(in);
            arr.push_back(en);
            in--;
            en++;
        }
        if (n % 2 == 1)
        {
            arr.push_back(mid);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}