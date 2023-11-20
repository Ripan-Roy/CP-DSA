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
    vector<ll> plus(n);
    vector<ll> minus(n);
    plus[0] = arr[0];
    minus[0] == arr[0];
    bool counter1 = false;
    for (int i = 1; i < n; i++)
    {
        plus[i] = plus[i - 1] + arr[i];
        // minus[i] = minus[i - 1] - arr[i];
        if(plus[i-1] - arr[i] > 0 && arr[i] != 0)
        {
            counter1 = true;
            break;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << plus[i] << " " << minus[i] << "\n";
    //     if (plus[i] > 0 && minus[i] > 0 && plus[i] != minus[i] && arr[i] != 0)
    //     {
    //         counter1 = true;
    //     }
    // }

    if (counter1 == true)
    {
        cout << -1;
        cout << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << plus[i] << " ";
        }
        cout << "\n";
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