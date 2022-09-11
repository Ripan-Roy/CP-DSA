#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long i = -1;
        if (a % 2 == 0)
        {
            if ((a + 2) <= b)
            {
                cout << a << " " << a + 2;
            }
            else
            {
                cout << i;
            }
        }
        else
        {
            if (a % 3 == 0)
            {
                if ((a + 3) <= b)
                {
                    cout << a << " " << a + 3;
                }
                else
                {
                    cout << i;
                }
            }
            else
            {
                if ((a + 3) <= b)
                {
                    cout << a + 1 << " " << a + 3;
                }
                else
                {
                    cout << i;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}