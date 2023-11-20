#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld 

const int mod = 1e9+7;
const int N = 1e5+5;


void helper()
{
    ll n;
    cin >> n;
    ll a = 1;
    ll i = 2;
    ll j = n;
    while (i < j)
    {
        if(i + j + a == n and i % 3 != 0 and j % 3 != 0)
        {
            cout << "YES\n";
            cout << i << " " << j << " " << a << "\n";
            return;
        }
        else if(i + j + a > n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "NO\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}
