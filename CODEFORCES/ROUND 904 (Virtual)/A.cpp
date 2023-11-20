#include <iostream>
using namespace std;

#define ll long long
#define ld long double

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll digitSum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void helper()
{
    ll x, k;
    cin >> x >> k;
    while(digitSum(x) % k != 0)
    {
        x += 1;
    }
    cout << x << "\n";
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}
