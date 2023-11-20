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
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (pq.empty() == false)
            {
                count += pq.top();
                pq.pop();
            }
        }
        else if (arr[i] != 0)
        {
            pq.push(arr[i]);
        }
    }
    cout << count << "\n";
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