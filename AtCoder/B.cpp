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
    vector<ll> arr(64);
    for (int i = 0; i < 64; i++)
    {
        cin >> arr[i];
    }
    ld ans = 0;
    for (int i = 0; i < 64; i++)
    {
        ans += (arr[i] * pow(2, i));
    }
    cout << ans << "\n";
}

int main()
{
    fastIO;
    helper();
    return 0;
}