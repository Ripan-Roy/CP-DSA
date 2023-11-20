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
    vector<int> arr(n);
    ll count0 = 0;
    ll count1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
    for(int i = 0;i < n; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = 1;
            break;
        }
    }
    ll count  = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i < j && arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << count << "\n";
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}