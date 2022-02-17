#include <bits/stdc++.h>
using namespace std;

int dsu[31];

int find(int a)
{
    return (dsu[a] == a ? a : dsu[a] = find(dsu[a]));
}

void unite(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    dsu[a] = b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n];
        for (int i = 1; i < 31; i++)
        {
            dsu[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr1[i];
        }
        sort(arr2, arr2 + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 31; j++)
            {
                for (int k = j + 1; k < 31; k++)
                {
                    if ((arr1[i] & (1LL << j)) && (arr1[i] & (1LL << k)))
                    {
                        unite(j, k);
                    }
                }
            }
        }
        int good = 1;
        for (int i = 0; i < n; i++)
        {
            if (!arr1[i] && !arr2[i])
            {
                continue;
            }
            int bad = 1;
            for (int j = 0; j < 31; j++){
                for (int k = 0; k < 31; k++){
                    if ((arr1[i] & (1LL << j)) && (arr2[i] & (1LL << k)) && find(j) == find(k))
                    {
                        bad = 0;
                    }
                }
            }
            if (bad)
            {
                good = 0;
            }
        }
        cout << (good ? "YES" : "NO") << "\n";
    }
    return 0;
}