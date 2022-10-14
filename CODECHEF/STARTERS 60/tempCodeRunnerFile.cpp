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

int palindrome(vector<ll> arr, int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
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
    if (palindrome(arr, n))
    {
        cout << 0 << "\n";
    }
    else
    {
        ll temp = 0;
        vector<ll> arr1(n / 2);
        ll ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[n - i - 1] >= arr[i])
            {
                arr1[temp] = abs(arr[n - i - 1] - arr[i]);
                temp++;
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
        ans = arr1[0];
        for (int i = 1; i < temp; i++)
        {
            if (arr1[i] <= arr[i - 1])
            {
                continue;
            }
            else
            {
               ans = -1;
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}