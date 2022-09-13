#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli digitSum(lli num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num % 9 == 0)
    {
        return 9;
    }
    else
    {
        return num % 9;
    }
}

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        lli n;
        cin >> n;
        lli find = 9 - digitSum(n);
        string str = to_string(n);
        string ans = str + to_string(find);
        string temp;
        for (int i = 0, j = i; i < j, j < str.length(); i++, j++)
        {
            temp = to_string(find) + str[j] + str[i];
            if (temp[0] == '0')
            {
                continue;
            }
            ans = min(temp, ans);
        }
        cout << "Case #" << ts << ": " << ans << "\n";
        ts++;
    }

    return 0;
}