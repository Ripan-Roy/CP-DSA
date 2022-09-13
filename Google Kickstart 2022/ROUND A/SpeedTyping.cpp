#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int size1 = str1.size();
        int size2 = str2.size();
        int i = 0, j = 0;
        int count = 0;
        while (i < size1 && j < size2)
        {
            if (str1[i] == str2[j])
            {
                i++;
            }
            else
            {
                count++;
            }
            j++;
        }
        if (i == size1)
        {
            cout << "Case #" << ts << ": " << (count + size2 - j) << "\n";
        }
        else
        {
            cout << "Case #" << ts << ": "
                 << "IMPOSSIBLE"
                 << "\n";
        }
        ts++;
    }

    return 0;
}