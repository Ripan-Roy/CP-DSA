#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n], count2 = 0;

        map<int, int> hash;

        int final_ans = 0;

        ll maximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            hash[arr[i]]++;
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }

        for (auto p : hash)
        {
            ll fi = p.first, se = p.second;

            count2 = max(count2, se);

            if (se == 1)
                final_ans = final_ans + 1;
        }

        if (final_ans % 2 == 0)
        {
            final_ans /= 2;
            cout << final_ans;
        }
        else
        {

            final_ans = (final_ans / 2) + 1;

            if (hash[maximum] == 1)
            {

                if (count2 == 2)
                {
                    final_ans++;
                }
            }

            cout << final_ans;
        }

        cout << "\n";
    }

    return 0;
}