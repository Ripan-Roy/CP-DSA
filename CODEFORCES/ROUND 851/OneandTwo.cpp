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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll countTwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countTwo++;
        }
    }
    if (countTwo == 0)
    {
        cout << 1 << "\n";
    }
    else if (countTwo % 2 == 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        ll count = countTwo / 2;
        ll countNew = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                countNew++;
                if (countNew == count)
                {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
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