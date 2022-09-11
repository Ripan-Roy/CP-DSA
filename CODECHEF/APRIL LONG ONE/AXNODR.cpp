#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        if (num % 4 == 1)
        {
            cout << num;
        }
        else if (num % 4 == 2 || num % 4 == 3)
        {
            cout << 3;
        }
        else if (num % 4 == 0)
        {
            cout << num + 3;
        }
        cout << "\n";
    }
    return 0;
}