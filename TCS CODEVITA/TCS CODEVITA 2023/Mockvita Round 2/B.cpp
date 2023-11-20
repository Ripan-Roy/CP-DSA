#include <bits/stdc++.h>
#define ll long long int
#define ld long double



using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll findPath(vector<string> &mat, ll n, ll col)
{
    ll coin = 0;
    ll pos = n - 1;
    for (int row = n - 1; row >= 0; row--)
    {
        if (mat[row][col] == '0')
        {
            return row;
        }
    }
    return 0;
}
pair<ll, ll> findHurdles(vector<string> &mat, ll n, ll col)
{
    ll coin = 0;
    ll hurdles = 0;
    for (ll row = 0; row < n; row++)
    {
        if (mat[row][col] == 'H')
        {
            hurdles++;
        }
        else if (mat[row][col] == 'C')
        {
            coin++;
        }
    }
    pair<ll, ll> temp = {coin, hurdles};
    return temp;
}
vector<ll> convert(string &str)
{
    vector<ll> ans;
    string s;
    stringstream ss(str);
    while (getline(ss, s, ' '))
    {
        ans.push_back(stoi(s));
    }
    return ans;
}

pair<ll, ll> findCoins(vector<string> &mat, ll n, ll col)
{
    ll coin = 0;
    ll pos = n - 1;
    for (ll row = 0; row < n; row++)
    {
        if (mat[row][col] == 'C')
        {
            coin++;
            pos = min(pos, row);
        }
    }
    pair<ll, ll> temp = {coin, pos};
    return temp;
}

int main()
{
    fastIO();
    vector<string> arr;
    string temp;
    while (getline(cin, temp))
    {
        if (temp == "")
        {
            continue;
        }
        arr.push_back(temp);
    }

    vector<ll> size = convert(arr[0]);
    ll n = size[0];
    ll m = size[1];

    auto it = arr.begin() + 1;
    vector<string> mat(it, arr.end());

    ll coin = 0;
    ll energy = 0;

    for (ll i = 0; i < m; i++)
    {
        auto temp = findHurdles(mat, n, i);

        if (temp.first > 0)
        {
            auto money = findCoins(mat, n, i);
            coin += money.first;
            energy += (2 * (n - money.second - 1));
        }
        else
        {
            ll path = findPath(mat, n, i);
            energy += 2 * (n - path - 1);
        }
    }

    cout << coin << " " << energy;

    return 0;
}