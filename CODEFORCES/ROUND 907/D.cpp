#include <bits/stdc++.h>
#include <thread>
#define ll long long
#define ld long double
using namespace std;

const int mod = 1e9 + 7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll fx(ll n)
{
    return floor(log2(n));
}

ll gx(ll n)
{
    return floor(log2(n) / log2(fx(n)));
}

void processRange(ll l, ll r, ll& result)
{
    ll ans = 0;
    for (ll i = l; i <= r; i++)
    {
        ans = (ans + gx(i)) % mod;
    }
    result = ans;
}

void helper()
{
    ll q;
    cin >> q;
    while (q--)
    {
        // 4 <= l <= r <= 1e18
        ll l, r;
        cin >> l >> r;
        ll ans = 0;

        // Define the number of threads you want to use
        int numThreads = 4;  // You can adjust this value

        vector<thread> threads;
        vector<ll> results(numThreads);
        ll range = (r - l + 1) / numThreads;

        for (int i = 0; i < numThreads; i++)
        {
            ll threadL = l + i * range;
            ll threadR = (i == numThreads - 1) ? r : threadL + range - 1;

            threads.emplace_back(processRange, threadL, threadR, ref(results[i]));
        }

        for (auto& thread : threads)
        {
            thread.join();
        }

        for (ll res : results)
        {
            ans = (ans + res) % mod;
        }

        cout << ans << "\n";
    }
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
