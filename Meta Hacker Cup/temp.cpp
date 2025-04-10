#include <bits/stdc++.h>
using namespace std;
int N;

void SieveOfEratosthenes(vector<int> &prime, vector<int> &prefix)
{
    int n = N;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == 1)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }

    for (int i = 2; i <= n - 2; i++)
    {
        prefix[i] = prefix[i - 1] + ((prime[i] && prime[i + 2]) ? 1 : 0);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    N = 1e7 + 1;
    int t;
    cin >> t;
    vector<int> prime(N + 1, 1);
    prime[0] = 0;
    prime[1] = 0;
    vector<int> prefix(N + 1, 0);

    SieveOfEratosthenes(prime, prefix);

    for (int test_case = 1; test_case <= t; test_case++)
    {
        int n;
        cin >> n;
        int ans = 0;

        if (n >= 5)
            ans = prefix[n - 2] + 1;
        cout << "Case #" << test_case << ": " << ans << "\n";
    }
}
