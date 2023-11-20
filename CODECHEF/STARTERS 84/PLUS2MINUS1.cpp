class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> a;
            for (int j = 0; j < n; j++)
            {
                a.push_back(0);
            }
            v.push_back(a);
        }
        int top = 0;
        int left = 0;
        int bottom = n - 1;
        int right = n - 1;

        int cnt = 0;

        while (top <= bottom and left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                v[top][i] = ++cnt;
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                v[i][right] = ++cnt;
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    v[bottom][i] = ++cnt;
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    v[i][left] = ++cnt;
                }
                left++;
            }
        }
        return v;
    }
};