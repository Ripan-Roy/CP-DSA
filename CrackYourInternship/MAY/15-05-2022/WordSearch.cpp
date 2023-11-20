//Word Search
//Link - https://leetcode.com/problems/word-search/
//Backtracking Solution

T.C - O(m*n)
S.C - O(n)

class Solution {
public:
    vector<int> di = {-1,0,1,0};
    vector<int> dj = {0,-1,0,1};
    bool explore(vector<vector<char>> &board, int i, int j, int si, string s)
    {
        if(si==s.length()) 
        {
            return true;
        }
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) 
        {
            return false;
        }
        
        if(s[si]!=board[i][j]) 
        {
            return false;
        }
        char myChar = board[i][j];
        board[i][j] = '@';
        for(int d=0;d<4;d++)
        {
            bool res = explore(board, i+di[d], j+dj[d], si+1, s);
            if(res)
            {
                board[i][j] = myChar;
                return true;
            }
        }
        board[i][j] = myChar;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]!=word[0]) 
                {
                    continue;
                }
                bool res = explore(board,i,j,0,word);
                if(res) 
                {
                    return res;
                }
            }
        }
        return false;
    }
};
