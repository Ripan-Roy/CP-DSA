#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Xa, Xb, Xc;
        cin >> Xa >> Xb >> Xc;
        if (Xa > 50)
        {
            cout << "A\n";
        }
        else if (Xb > 50)
        {
            cout << "B\n";
        }
        else if (Xc > 50)
        {
            cout << "C\n";
        }
        else
        {
            cout << "NOTA\n";
        }
    }
    return 0;
}