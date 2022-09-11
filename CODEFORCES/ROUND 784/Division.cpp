#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll rating;
        cin >> rating;
        if (rating >= 1900)
        {
            cout << "Division 1\n";
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2\n";
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3\n";
        }
        else if (rating <= 1399)
        {
            cout << "Division 4\n";
        }
    }

    return 0;
}