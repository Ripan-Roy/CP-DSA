#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = 1e9;

int query(int r, int c)
{
    cout << "? " << r << " " << c << endl;
    cout.flush();
    int res;
    cin >> res;
    return res;
}

void solve(int n, int m)
{
    int midr = (n + 1) / 2;
    int midc = (m + 1) / 2;
    int dist = query(midr, midc);
    if (dist == 0)
    {
        cout << "! " << midr << " " << midc << endl;
        cout.flush();
        return;
    }
    int corners[4][2] = {{1, 1}, {1, m}, {n, 1}, {n, m}};
    for (int i = 0; i < 4; i++)
    {
        int r = corners[i][0], c = corners[i][1];
        int d = query(r, c);
        if (d == dist - abs(r - midr) - abs(c - midc))
        {
            cout << "! " << r << " " << c << endl;
            cout.flush();
            return;
        }
    }
    int opposite[2] = {(midr - 1) * 2 + 1, (midc - 1) * 2 + 1};
    for (int i = 0; i < 4; i++)
    {
        int r = corners[i][0], c = corners[i][1];
        if (r != midr && c != midc)
        {
            int d = query(r, c);
            if (d == abs(r - opposite[0]) + abs(c - opposite[1]))
            {
                int opposite_corner[2] = {opposite[0], opposite[1]};
                if (r < midr)
                {
                    opposite_corner[0] = n - opposite_corner[0] + 1;
                }
                if (c < midc)
                {
                    opposite_corner[1] = m - opposite_corner[1] + 1;
                }
                solve(abs(n - opposite_corner[0]) + 1, abs(m - opposite_corner[1]) + 1);
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}
