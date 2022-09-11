#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b, div = 0, mod = 0;
        cin >> n >> r >> b;
        div = r / (b + 1);
        mod = r % (b + 1);
        while (r)
        {
            int need = div + (mod > 0);
            mod = max(0, mod - 1);
            r -= need;
            while (need--)
                printf("R");
            if (b > 0)
            {
                printf("B");
                --b;
            }
        }
        puts("");
    }
    return 0;
}