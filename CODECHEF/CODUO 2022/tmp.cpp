#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int forward[n + 10];
        int backward[n + 10];
        forward[0] = backward[n + 1] = 0;
        int a[n + 10];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }

        for (int i = n; i >= 1; i--)
        {
            backward[i] = __gcd(backward[i + 1], a[i]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;
            cout << __gcd(forward[l-1], backward[r+1]) << "\n";
        }
    }
    return 0;
}