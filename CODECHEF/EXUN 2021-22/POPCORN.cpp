#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A1, A2, B1, B2, C1, C2;
        cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
        int A = A1 + A2;
        int B = B1 + B2;
        int C = C1 + C2;
        cout << max(A, max(B, C)) << "\n";
    }
    return 0;
}
