#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

const int mod = 1e9+7;
const int N = 2e5+5;

bool isEdgePossible(int i, int j, vector<int> &arr, int c)
{
    ll sum = 0;
    for(int s = i; s <= j; s++)
    {
        sum += arr[s];
    }
    
}


void helper()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    for(auto &it : arr)
    {
        cin >> it;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!isEdgePossible(i, j, arr, c))
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}
