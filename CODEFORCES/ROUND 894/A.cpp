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

bool find(vector<string> arr, int col, char c)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i][col] == c)
        {
            return true;
        }
    }
    return false;
}

void helper()
{
    ll n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (find(arr, i, 'v'))
        {
            for (int j = i + 1; j < m; j++)
            {
                if (find(arr, j, 'i'))
                {
                    for (int k = j + 1; k < m; k++)
                    {
                        if (find(arr, k, 'k'))
                        {
                            for (int l = k + 1; l < m; l++)
                            {
                                if (find(arr, l, 'a'))
                                {
                                    cout << "YES\n";
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}