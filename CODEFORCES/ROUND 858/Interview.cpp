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
    ll n, q;
    cin >> n;
    ll sum = 0;
    vector<ll> v, pre;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        v.push_back(x);
        pre.push_back(sum);
    }
    ll st = 0, en = n - 1, idx;
    while (st <= en)
    {
        ll m = st + (en - st) / 2;
        if (st == 0)
        {
            sum = pre[m];
        }
        else
        {
            sum = pre[m] - pre[st - 1];
        }
        cout << "? " << m - st + 1 << " ";
        for (ll i = st; i <= m; i++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
        cout.flush();
        ll x;
        cin >> x;
        if (x != sum)
        {
            idx = m + 1;
            en = m - 1;
        }
        else
        {
            st = m + 1;
        }
    }
    cout << "! " << idx << endl;
}
int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
