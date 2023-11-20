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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll count = 0;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
        else if (arr[i] > arr[i + 1])
        {
            if(count > 0)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
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