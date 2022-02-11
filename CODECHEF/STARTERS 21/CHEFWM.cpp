#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long int ans = 0, temp = m;
        for (long long int i = 2; i * i <= m; i++)
        {
            if (!(temp % i))
            {
                ans++;
                while (!(temp % i))
                {
                    temp = temp / i;
                }
            }
        }

        if (temp > 1)
        {
            ans++;
        }

        vector<long long> arr;
        for (long long int i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                arr.push_back(i);
                if (i != (n / i))
                {
                    arr.push_back(n / i);
                }
            }
        }

        long long value = 0;

        for (auto a : arr)
        {
            if (a <= ans)
            {
                value = a;
            }
        }

        cout << value << "\n";
    }
    return 0;
}