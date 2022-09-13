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
        vector<string> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        string s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; i < str[i].length(); j++)
            {
                for (int k = 0; k < str[i].length(); k++)
                {
                    if (str[i][j] == str[i][k])
                    {
                        s = "IMPOSSIBLE";
                    }
                    else
                    {
                        s = "POSSIBLE";
                    }
                }
            }

            // for (int i = 0; i < ans.size(); i++)
            // {
            //     s += ans[i];
            // }

            cout << "Case #" << ts << ": " << s << endl;
            ts++;
        }
    }
    return 0;
}