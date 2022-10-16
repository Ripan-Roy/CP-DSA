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
    vector<string> arr;
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arr[i][j] == 'R' || arr[i][j] == 'B')
            {
                cout << "YES\n";
                return;
            }
            if(arr[j][i] == 'R' || arr[j][i] == 'B')
            {
                cout << "YES\n";
                return;
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