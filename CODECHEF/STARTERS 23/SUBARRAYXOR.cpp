#include <bits/stdc++.h>
using namespace std;

long long XOR(long long previous, long long ptr)
{
    for (long long i = 0; i < 21; i++)
    {
        if ((ptr & (1 << i)) > 0)
            previous ^= (1 << i);
    }
    return previous;
}

int main()
{
    long long t;
    t = 1;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> result;
        map<long long, long long> ans;
        ans[0] = 1;
        long long ptr = 1;
        long long previous = 0;
        for (long long i = 0; i < n; i++)
        {
            while (ans[XOR(previous, ptr)] == 1)
            {
                ptr++;
            }
            previous = XOR(previous, ptr);
            ans[previous] = 1;
            result.push_back(ptr);
            ptr++;
        }

        for (auto x : result)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}