#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 12;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool dfs(vector<vector<int>> &grid, int x, int y, vector<vector<bool>> &visited, string &path)
{
    if (x == N - 2 && y == N - 2)
    { // reached the exit
        return true;
    }
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny] && !grid[nx][ny])
        {
            path += "NESW"[i]; // add current direction to path
            if (dfs(grid, nx, ny, visited, path))
            {
                return true;
            }
            path.pop_back(); // remove current direction from path
        }
    }
    return false;
}

string findPath(vector<vector<int>> &grid)
{
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    string path = "";
    dfs(grid, 1, 1, visited, path);
    return path;
}

int main()
{

    vector<vector<int>> grid = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1},
        {1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    cout << findPath(grid) << endl;
    return 0;
}