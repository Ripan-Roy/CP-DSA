#include <bits/stdc++.h>
using namespace std;

int maxi = 10000000;
vector<bool> is_prime(maxi + 1, true);
vector<int> primes;
vector<int> pref(maxi + 1, 0);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= maxi; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxi; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= maxi; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }

    for (int i = 2; i <= maxi - 2; ++i)
    {
        pref[i] = pref[i - 1] + (is_prime[i] && is_prime[i + 2] ? 1 : 0);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    sieve();

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        int twin_count = (N >= 5) ? pref[N - 2] : 0;

        int total_twin = twin_count;
        if (twin_count >= 1)
        {
            total_twin++;
        }
        cout << "Case #" << i << ": " << total_twin << "\n";
    }

    return 0;
}
