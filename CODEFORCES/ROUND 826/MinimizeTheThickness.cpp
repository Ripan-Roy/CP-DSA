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
    vector<ll> arr(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    vector<ll> arr2;
    for (int i = 1; i * i <= sum; i++)
    {
        if (sum % i == 0)
        {
            arr2.push_back(i);
            if (sum / i != i)
            {
                arr2.push_back(sum / i);
            }
        }
    }
    ll ans = n;
    if(arr2.size()<=2)
    {   
        cout << n << "\n";
    }
    for(int i = 0; i < n; i++)
    {
        ll temp = sum / arr[i];
        bool counter = false;
        ll count1 = 0, count2 = 0, MAX = 0;
        for(int j = 0; j < n; j++)
        {
            count1 += arr[j];
            count2++;
            if(count1 == temp)
            {
                MAX = max(MAX, count2);
                count1 = 0;
                count2 = 0;
            }
            else if(count1 > temp)
            {
                counter = true;
                break;
            }
        }
        if(counter == false)
        {
            ans = min(ans, MAX);
        }
    }
    cout << ans << "\n";
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