#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

pair<bool, int> check(vector<ll> &arr, ll n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
            return make_pair(true, i + 1);
    }
    return make_pair(false, -1);
}

void cyclicShiftRight(vector<ll> &arr, ll k)
{
    ll n = arr.size();
    vector<ll> temp(n);
    for (ll i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
}

void helper()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll count = n - 1;
    unordered_set<ll> st;
    bool check = true;

    for(ll i = 0; i < k; i++)
    {
        if(st.find(count) != st.end())
        {
            break;
        }
        if(arr[count] > n)
        {
            check = false;
            break;
        }
        st.insert(count);
        count = (count - arr[count] + n) % n;
    }
    if(!check)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
