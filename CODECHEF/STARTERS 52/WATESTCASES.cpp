#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        ll ans = 0;
        vector<ll> arr1;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '0')
            {
                arr1.push_back(arr[i]);
            }
        }
        ll mini = *min_element(arr1.begin(), arr1.end());
        cout << mini << "\n";
    }
    return 0;
}