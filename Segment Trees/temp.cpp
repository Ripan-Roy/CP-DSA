#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> updates(q);
        vector<int> queries(q);
        for (int i = 0; i < q; i++)
        {
            int type;
            cin >> type;

            if (type == 1)
            {
                int l, r;
                cin >> l >> r;

                for (int j = l - 1; j < r; j++)
                {
                    int sum = 0;
                    int tmp = a[j];
                    while (tmp > 0)
                    {
                        sum += tmp % 10;
                        tmp /= 10;
                    }
                    a[j] = sum;
                }
            }
            else
            {
                int x;
                cin >> x;

                updates[i] = x;
            }
        }

        for (int i = 0; i < q; i++)
        {
            if (updates[i] != 0)
            {
                int sum = 0;
                int tmp = a[updates[i] - 1];
                while (tmp > 0)
                {
                    sum += tmp % 10;
                    tmp /= 10;
                }
                a[updates[i] - 1] = sum;

                queries[i] = a[updates[i] - 1];
            }
            else
            {
                queries[i] = a[queries[i] - 1];
            }
        }

        for (int i = 0; i < q; i++)
        {
            if (queries[i] != 0)
            {
                cout << queries[i] << endl;
            }
        }
    }

    return 0;
}
