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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    queue<ll> q;
    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        while (q.front() < q.size() && q.size() != 0)
        {
            q.pop();
        }
        int n = q.size();
        cout << n << " ";
    }
    cout << endl;
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