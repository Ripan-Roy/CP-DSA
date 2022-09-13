#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= count + 1)
            {
                count++;
            }
        }
        cout << "Case #" << ts << ": " << count << "\n";
        ts++;
    }

    return 0;
}