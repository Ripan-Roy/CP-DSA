#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }

        int missing = 0, repeated = 0;
        for (int i = 1; i <= n; i++)
        {
            if (count.find(i) == count.end())
            {
                missing++;
            }
            else if (count[i] > 1)
            {
                repeated += count[i] - 1;
            }
        }

        if (missing == 0)
        {
            cout << repeated * c << endl;
        }
        else if (repeated == 0)
        {
            cout << missing * d << endl;
        }
        else
        {
            int min_cost = INT_MAX;
            for (int i = 0; i <= missing; i++)
            {
                int x = missing - i;
                int y = repeated - i;
                if (x >= 0 && y >= 0)
                {
                    int cost = i * c + x * d;
                    min_cost = min(min_cost, cost);
                }
            }
            cout << min_cost << endl;
        }
    }
    return 0;
}
