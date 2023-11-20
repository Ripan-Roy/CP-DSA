#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int n = str.size();

    int micky = 0, marry = 0;
    for (int i = 0; i < n; i++)
    {
        if ((str[i] - '0') % 2 == 1)
        {
            marry++;
        }
        else
        {
            micky++;
        }
    }
    cout << marry << "\n"
         << micky << "\n";
    return 0;
}