#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<char>> ans;
        vector<char> arr1, arr2;
        for (int i = 0; i < c; i++)
        {
            arr1.push_back('+');
            arr1.push_back('-');
        }
        arr1.push_back('+');
        ans.push_back(arr1);
        arr1.clear();

        cout << "Case #" << ts << ": " << "\n";
        
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                arr1.push_back('+');
                arr1.push_back('-');
                arr2.push_back('|');
                arr2.push_back('.');
            }
            arr1.push_back('+');
            arr2.push_back('|');
            ans.push_back(arr2);
            ans.push_back(arr1);
            arr1.clear();
            arr2.clear();
        }
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[0].size(); j++)
            {
                if (i == 0 && j == 0)
                {
                    ans[i][j] = '.';
                }
                if (i == 0 && j == 1)
                {
                    ans[i][j] = '.';
                }
                if (i == 1 && j == 0)
                {
                    ans[i][j] = '.';
                }
                if (i == 1 && j == 1)
                {
                    ans[i][j] = '.';
                }
                cout << ans[i][j];
            }
            cout << "\n";
        }
        ts++;
    }

    return 0;
}