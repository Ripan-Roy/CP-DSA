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
    ll mx = *max_element(arr.begin(), arr.end());
    ll mn = *min_element(arr.begin(), arr.end());
    if (mx > n)
    {
        cout << "NO\n";
        return;
    }
    vector<ll> rotate(n + 1, 0);
    int sym = 0;
    for (int i = 0; i < n; i++)
    {
        rotate[0]++;
        rotate[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        sym += rotate[i];
        rotate[i] = sym;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != rotate[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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