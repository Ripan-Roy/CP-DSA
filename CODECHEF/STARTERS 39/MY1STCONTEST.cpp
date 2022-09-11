#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b;
    cin >> n >> a >> b;
    a = n - a;
    b = a - b;
    cout << a << " " <<  b << "\n";
    return 0;
}