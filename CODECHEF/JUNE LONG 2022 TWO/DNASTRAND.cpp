#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str;
        cin >> str;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i]=='A') str[i]='T';
            else if(str[i]=='T') str[i]='A';
            else if(str[i]=='C') str[i]='G';
            else if(str[i]=='G') str[i]='C';
        }
        cout << str << "\n";
    }
    return 0;
}