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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n; i++)
    {
        cout << str[i] << str[i];
    }
    cout << endl;
}

int main()
{
    fastIO;
    helper();
    return 0;
}