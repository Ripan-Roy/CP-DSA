#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const ll ll_MAX = 1e18;
const ll ll_MIN = -1e18;
const ll MOD = 1e9 + 7;

class SGTree
{
private:
    vector<ll> tree;
public:
    SGTree(ll n)
    {
        tree.resize(4 * n + 1);
    }
    void build(ll ind, ll low, ll high, vector<ll> &arr)
    {
        if(low == high)
        {
            seg[ind] = arr[low];
            return;
        }
        ll mid = (low + high) >> 1;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        
    }
};

ll digitSum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    SGTree tree(4 * n + 1);
    tree.build(arr, 0, n - 1, 1);
    while (q--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            for (ll i = l; i <= r; ++i)
            {
                ll newVal = digitSum(arr[i]);
                tree.update(arr, 0, n - 1, 1, i, newVal);
            }
        }
        else
        {
            ll x;
            cin >> x;
            x--;
            cout << tree.query(x) << endl;
        }
    }
}

int main()
{
    fastIO();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
