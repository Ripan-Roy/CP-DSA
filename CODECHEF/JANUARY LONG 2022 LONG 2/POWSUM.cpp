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
        int arr[n];
        int prefSum = 0,sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefSum = prefSum + arr[i];
        }
        if (prefSum > 0 && (prefSum & (prefSum - 1)) == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            unsigned int opsize = pow(2, n);

            for (int counter = 1; counter < opsize; counter++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (counter & (1 << j))
                        // cout << arr[j] << " ";
                        sum=sum+arr[j];
                        // if(sum)
                }
            }
        }
    }

    return 0;
}