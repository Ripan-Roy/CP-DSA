// Container With Most Water
// Link - https://leetcode.com/problems/container-with-most-water/

T.C - O(n) 
S.C - O(1)

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j)
        {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j)
            {
                i++;
            }
            while (height[j] <= h && i < j)
            {
                j--;
            }
        }
        return water;
    }
};