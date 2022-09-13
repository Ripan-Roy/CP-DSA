#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        vector<int> s1;
        vector<int> s2;
        vector<int> s3;

        for (int i = 0; i < s1.size(); i++)
        {
            int x;
            cin >> x;
            s1.push_back(x);
        }

        for (int i = 0; i < s2.size(); i++)
        {
            int x;
            cin >> x;
            s2.push_back(x);
        }

        for (int i = 0; i < s3.size(); i++)
        {
            int x;
            cin >> x;
            s3.push_back(x);
        }

        int min1 = min(s3[0], min(s1[0], s2[0]));

        int min2 = min(s3[1], min(s1[1], s2[1]));

        int min3 = min(s3[2], min(s1[2], s2[2]));

        int min4 = min(s3[3], min(s1[3], s2[3]));

        int ans = min1 + min2 + min3 + min4;

        if (ans == 1000000)
        {
            cout << "Case #" << ts << ": " << min1 << " " << min2 << " " << min3 << " " << min4 << "\n";
        }
        else if (ans < 100000)
        {
            cout << "Case #" << ts << ": " << "IMPOSSIBLE" << "\n";
        }
        else 
        {
            ans = 0;
            int i = 0;
            list<int> v = {min1, min2, min3, min4};
            while(ans<1000000)
            {
                ans = ans + v[i];
                i++;
            }
            if(ans == 1000000)
            {
                
            }
        }
        ts++;
    }

    return 0;
}