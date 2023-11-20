#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sortdi(pair<string, pair<ll, ll>> &x, pair<string, pair<ll, ll>> &y)
{
    if (x.second.first != y.second.first)
    {
        return x.second.first < y.second.first;
    }
    else
    {
        return x.second.second < y.second.second;
    }
}
bool sortui(pair<string, pair<ll, ll>> &x, pair<string, pair<ll, ll>> &y)
{
    if (x.first != y.first)
    {
        return x.first < y.first;
    }
    else
    {
        return x.second.second < y.second.second;
    }
}

int main()
{
    ll ts = 1, te;
    cin >> te;
    while (ts <= te)
    {
        ll n;
        cin >> n;
        ll count = 0;
        vector<pair<string, pair<ll, ll>>> arr;
        vector<pair<string, pair<ll, ll>>> temp;

        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            ll x, y;
            cin >> x >> y;
            arr.push_back({str, {x, y}});
        }
        temp = arr;
        sort(arr.begin(), arr.end(), sortui);
        sort(temp.begin(), temp.end(), sortdi);
        for (int i = 0; i < n; i++)
        {
            if (temp[i] == arr[i])
            {
                count++;
            }
        }
        cout << "Case #" << ts << ": " << count << "\n";
        ts++;
    }
    return 0;
}