#include <bits/stdc++.h>
#define ll long long int
using namespace std;

unordered_set<int> st;

void Seive(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int it = i * i; it <= n; it += i)
                prime[it] = false;
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            st.insert(p);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), greater<int>());
        Seive(m);
        vector<int> result;
        for (auto num : st)
        {
            // cout << num << " ";
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % num == 0)
                {
                    result.push_back(arr[i]);
                    break;
                }
            }
        }
        sort(result.begin(), result.end(), greater<int>());
        if (result.empty())
            cout << -1 << "\n";
        else
        {
            cout << result[0] - result[1] << "\n";
        }
    }
    return 0;
}