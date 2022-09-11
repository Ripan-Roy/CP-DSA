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
        ll num1, num2;
        cin >> num1 >> num2;
        if (num1 % 2 == 0)
        {
            if ((num1 + 2) <= num2)
            {
                cout << num1 << " " << num1 + 2;
            }
            else
            {
                cout << -1;
            }
        }
        else
        {
            if (num1 % 3 == 0)
            {
                if ((num1 + 3) <= num2)
                {
                    cout << num1 << " " << num1 + 3;
                }
                else
                {
                    cout << -1;
                }
            }
            else
            {
                if ((num1 + 3) <= num2)
                {
                    cout << num1 + 1 << " " << num1 + 3;
                }
                else
                {
                    cout << -1;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}