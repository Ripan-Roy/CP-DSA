//Maximum Points You Can Obtain From Cards
// Link - https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

T.C - O(n)
S.C - O(1)
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        for (int i = 0; i < k; i++) 
        {
            total += cardPoints[i];
        }
        int best = total;
        for (int i = k - 1, j = cardPoints.size() - 1; ~i; i--, j--)
        {
            total += cardPoints[j] - cardPoints[i];
            best = max(best, total);
        }
        return best;
    }
};