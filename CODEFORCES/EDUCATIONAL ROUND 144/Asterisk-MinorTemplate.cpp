#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void helper()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    ll size1 = a.length();
    ll size2 = b.length();
    if (a[0] == b[0])
    {
        cout << "YES"
             << "\n"
             << a[0] << "*"
             << "\n";
        return;
    }
    if (a[size1 - 1] == b[size2 - 1])
    {
        cout << "YES"
             << "\n"
             << "*"
             << a[size1 - 1] << "\n";
        return;
    }
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
            {
                cout << "YES"
                     << "\n"
                     << "*" << a[i] << a[i + 1] << "*"
                     << "\n";
                return;
            }
        }
    }
    cout << "NO"
         << "\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}