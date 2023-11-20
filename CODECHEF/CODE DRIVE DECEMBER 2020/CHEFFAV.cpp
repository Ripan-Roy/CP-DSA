#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string A;
        cin >> A;
        string str = "AC";

        for (long long int i = 0; i < n - 3; i++)
        {
            if (A[i] == 'c' && A[i + 1] == 'o' && A[i + 2] == 'd' && A[i + 3] == 'e')
                break;
            if (A[i] == 'c' && A[i + 1] == 'h' && A[i + 2] == 'e' && A[i + 3] == 'f')
            {
                str = "WA";
                break;
            }
        }
        cout << str << "\n";
    }
    return 0;
}