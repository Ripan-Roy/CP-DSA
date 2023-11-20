#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

string find_smallest_prime(vector<int> &numbers, int q)
{
    sort(numbers.begin(), numbers.end());

    for (int i = 1; i < numbers.size(); ++i)
    {
        bool is_prime_p = true;
        for (int c = 0; c < numbers.size(); ++c)
        {
            if (numbers[c] != q && (q + 1) % numbers[c] != q)
            {
                is_prime_p = false;
                break;
            }
        }
        if (is_prime_p && is_prime(q + 1))
        {
            return to_string(q + 1);
        }
    }

    return "None";
}

int main()
{
    int n;
    int mini = INT_MAX;
    vector<int> numbers;

    while (cin >> n)
    {
        int a = n;
        numbers.push_back(a);
        mini = min(mini, a);
    }


    cout << find_smallest_prime(numbers, mini) << endl;

    return 0;
}
