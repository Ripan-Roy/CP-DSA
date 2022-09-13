#include <bits/stdc++.h>
using namespace std;

int main()
{
    string numbers;
    cin >> numbers;

    string actions;
    cin >> actions;

    int count = 0;

    int size1 = numbers.length();
    int size2 = actions.length();

    for (int i = 0; i < size2; i++)
    {
        if (actions[i] == 'R')
        {
            count++;
        }
        else if (actions[i] == 'L')
        {
            count--;
        }
        else if (actions[i] == 'T')
        {
            int num = numbers[count] - '0';
            if (num != 9)
            {
                num++;
                numbers[count] = num + '0';
            }
        }
        else if (actions[i] == 'D')
        {
            int num = numbers[count] - '0';
            if (num != '0')
            {
                num--;
                numbers[count] = num + '0';
            }
        }
        else
        {
            i++;
            int num = (actions[i] - '0') - 1;
            swap(numbers[count], numbers[num]);
        }
    }
    cout << numbers;
    return 0;
}