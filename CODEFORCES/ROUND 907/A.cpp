#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

const int N = 1e5 + 5;
const int mod = 1e9 + 7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool isPowerTwo(int n)
{
    return (n && !(n & (n - 1)));
}

void helper()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (!isPowerTwo(i + 1))
            {
                check = true;
                break;
            }
        }
    }
    if(!check) cout << "YES\n";
    else cout << "NO\n";
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