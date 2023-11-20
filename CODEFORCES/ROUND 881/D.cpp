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

void dfs(unordered_map<ll, vector<ll>> &adj, vector<ll> &mark, ll node, ll parent)
{
    ll size = adj[node].size();
    if (size == 1 && parent != -1)
    {
        mark[node] = 1;
    }
    for (auto child : adj[node])
    {
        if (child != parent)
        {
            dfs(adj, mark, child, node);
            mark[node] += mark[child];
        }
    }
}

void helper()
{
    ll n;
    cin >> n;
    unordered_map<ll, vector<ll>> adj(n + 1);
    vector<ll> mark(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(adj, mark, 1, -1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << mark[x] * mark[y] << "\n";
    }
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
