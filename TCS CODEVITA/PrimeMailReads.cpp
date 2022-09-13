#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli primeSieve(lli num)
{
    vector<bool> checkPrime(num + 1, true);
    lli count = 0;
    for (int it = 2; it * it <= num; it++)
    {
        if (checkPrime[it] == true)
        {
            for (int j = it * it; j <= num; j = j + it)
            {
                checkPrime[j] = false;
            }
        }
    }
    for (int k = 2; k <= num; k++)
    {
        if (checkPrime[k])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    lli num;
    cin >> num;
    lli countNum = 0;
    while (num > 1)
    {
        lli ans = primeSieve(num);
        countNum++;
        num = num - ans;
    }
    cout << countNum + 1;
    return 0;
}