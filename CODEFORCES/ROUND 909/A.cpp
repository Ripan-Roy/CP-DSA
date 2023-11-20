#include<bits/stdc++.h>
#define ll long long
using namespace std;


void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    ll n;
    cin >> n;
    if(n % 3 == 0)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }
}

int main()
{
    fastIO();
    ll t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}