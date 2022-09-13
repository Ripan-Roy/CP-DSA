#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<vector<int>> arr(n, )
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int num = 0; num < (1 << n); num++)
    {
        for(int i = 0; i < n; i++)
        {
            if(num & (1 << i))
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}