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
    vector<int> arr(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        if (arr[i] < 100 || arr[i] > 675 || arr[i] % 25 != 0)
        {
            cout << "No\n";
            return;
        }
    }
    vector<int> temp(arr.begin(), arr.end());
    sort(arr.begin(), arr.end());
    if (arr != temp)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

int main()
{
    fastIO;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}