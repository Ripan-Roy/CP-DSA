#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int a = (int)str[0] - '0';
        int b = (int)str[1] - '0';
        int c = (int)str[2] - '0';
        int d = (int)str[3] - '0';
        int e = (int)str[4] - '0';
        int f = (int)str[5] - '0';

        if(a+b+c==d+e+f)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}