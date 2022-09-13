#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ts = 1, te;
    cin >> te;
    while (ts <= te)
    {
        ll n;
        cin >> n;
        deque<ll> dq;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        // for(int it: dq)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;
        ll count = 0;
        ll prev = -1;
        while (dq.empty() != true)
        {
            if (dq.front() <= dq.back())
            {
                if (dq.front() >= prev)
                {
                    prev = dq.front();
                    count++;
                }
                dq.pop_front();
            }
            else
            {
                if (dq.back() >= prev)
                {
                    prev = dq.back();
                    count++;
                }
                dq.pop_back();
            }
        }
        cout << "Case #" << ts << ": " << count << "\n";
        ts++;
    }

    return 0;
}