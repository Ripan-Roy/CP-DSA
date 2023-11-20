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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 4 7 3 5
    // 7 5 7 7
    int maxi = *max_element(arr.begin(), arr.end());
    vector<int> ans(arr.begin(), arr.end());
    sort(ans.begin(), ans.end());
    int secondmax = ans[n - 2];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == maxi)
        {
            ans[i] = maxi - secondmax;
        }
        else
        {
            ans[i] = arr[i] - maxi;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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