#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int prefSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefSum += arr[i];
        }
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(prefSum %2!= 0 || prefSum==1)
        {
            cout<<"YES\n";
        }
        else
        {
            if(odd!=0 &&even!=0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            }
        }
            return 0;
    }