#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n % 2)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << 0 << " " << (n / 2) << "\n";
    cout << (n / 2) << " " << 0 << "\n";
    cout << 0 << " " << -(n / 2) << "\n";
    cout << -(n / 2) << " " << 0 << "\n";
    return 0;
}