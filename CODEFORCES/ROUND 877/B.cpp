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
    ll onePos = -1;
    ll twoPos = -1;
    ll nPos = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            onePos = i;
        }
        else if (arr[i] == n)
        {
            nPos = i;
        }
        else if (arr[i] == 2)
        {
            twoPos = i;
        }
    }
    if ((onePos < nPos && nPos < twoPos) || (twoPos < nPos && nPos < onePos))
    {
        cout << onePos + 1 << " " << twoPos + 1 << "\n";
    }
    else
    {
        if (nPos > onePos && nPos > twoPos)
        {
            cout << max(twoPos + 1, onePos + 1) << " " << nPos + 1 << "\n";
        }
        else
        {
            cout << nPos + 1 << " " << min(twoPos + 1, onePos + 1) << "\n";
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