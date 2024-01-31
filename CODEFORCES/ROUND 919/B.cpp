#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int row = ceil(sqrt(n));
    int col = ceil(sqrt(n));
    if (row * col < n)
    {
        col++;
    }
    vector<vector<char>> mat(row, vector<char>(col));
    int it = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(it < n) mat[i][j] = str[it++];
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (mat[j][i] != ' ')
                cout << mat[j][i];
        }
        cout << " ";
    }
    return 0;
}