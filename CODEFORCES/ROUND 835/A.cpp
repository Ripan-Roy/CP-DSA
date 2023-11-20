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
    vector<int> arr(3);
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[1] <<"\n";
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