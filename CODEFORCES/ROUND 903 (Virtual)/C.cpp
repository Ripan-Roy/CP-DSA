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
    ll n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<vector<char>> arr2(n, vector<char>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        reverse(arr2[i].begin(), arr2[i].end());
    }
    ll count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            vector<ll> temp;
            temp.push_back(arr[i][j] - 'a');
            temp.push_back(arr[j][n - i - 1] - 'a');
            temp.push_back(arr[n - i - 1][n - j - 1] - 'a');
            temp.push_back(arr[n - j - 1][i] - 'a');
            sort(temp.begin(), temp.end());
            for (int k = 0; k < 4; k++)
            {
                count += abs(temp[3] - temp[k]);
            }
        }
    }
    cout << count << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
