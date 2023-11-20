#include <bits/stdc++.h>
using namespace std;

long long getSum(long long n)
{
    long long sum = 0;
    while (n != 0) 
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            long long count = 0;
            for(long long i = 1; i <= n ; i++)
            {
                if(i * getSum(i) == n)
                {
                    count++;
                }
            }
            cout << count <<"\n";
        }
    }
    return 0;
}