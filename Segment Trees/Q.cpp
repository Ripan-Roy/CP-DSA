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
    vector<ll> seg;
public:
    SGTree(ll n)
    {
        seg.resize(4 * n + 1);
    }

    void build(ll ind, ll low, ll high, vector<ll>& arr, bool flag)
    {
        if (low == high)
        {
            seg[ind] = arr[low];
            return;
        }

        ll mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr, !flag);
        build(2 * ind + 2, mid + 1, high, arr, !flag);
        if (flag)
        {
            seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
        }
        else
        {
            seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
        }
    }

    ll query(ll idx)
    {
        return seg[idx];
    }

    void update(ll ind, ll low, ll high, ll i, ll val, bool flag)
    {
        if (low == high)
        {
            seg[ind] = val;
            return;
        }
        ll mid = (low + high) >> 1;
        if (i <= mid)
        {
            update(2 * ind + 1, low, mid, i, val, !flag);
        }
        else
        {
            update(2 * ind + 2, mid + 1, high, i, val, !flag);
        }
        if (flag)
        {
            seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
        }
        else
        {
            seg[ind] = seg[2 * ind + 1] ^ seg[2 * ind + 2];
        }
    }
};

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
    vector<ll> arr(pow(2, n));
    for (auto& it : arr)
    {
        cin >> it;
    }
    ll size = 4 * (pow(2, n) + 1);
    SGTree sg(4 * (pow(2, n) + 1));
    if (n % 2 == 0)
    {
        sg.build(0, 0, pow(2, n) - 1, arr, false);
    }
    else
    {
        sg.build(0, 0, pow(2, n) - 1, arr, true);
    }
    while (q--)
    {
        ll idx, val;
        cin >> idx >> val;
        idx--;
        if (n % 2 == 0)
        {
            sg.update(0, 0, pow(2, n) - 1, idx, val, false);
        }
        else
        {
            sg.update(0, 0, pow(2, n) - 1, idx, val, true);
        }
        cout << sg.query(0) << "\n";
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
