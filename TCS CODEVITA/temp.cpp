#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    string str1;
    string str2;
    cin >> str1;

    size = str1.length();

    int count=0;

    int nB = 0;
    int nG = 0;
    for (int i = 0; i <= size; i++)
    {
        if (str1[i] == 'B')
        {
            nB++;
        }
        else
        {
            nG++;
        }
    }

    if (size % 2 == 1)
    {
        if (nG > nB)
        {
            for (int i = 1; i <= size; i++)
            {
                if (i % 2 == 1)
                {
                    str2.push_back('G');
                }
                else
                {
                    str2.push_back('B');
                }
            }
        }

        else
        {
            for (int i = 1; i < size; i++)
            {
                if (i % 2 == 1)
                {
                    str2.push_back('B');
                }
                else
                {
                    str2.push_back('G');
                }
            }
        }
    }
    else
    {
        if(str1[0] == 'B')
        {
            for(int i=1; i<=size; i++)
            {
                if(i % 2 == 1)
                {
                    str2.push_back('B');
                }
                else
                {
                    str2.push_back('G');
                }
            }
        }

        else
        {
            for(int i=1; i<=size; i++)
            {
                if(i % 2 == 1)
                {
                    str2.push_back('B');
                }
                else
                {
                    str2.push_back('G');
                }
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        if(str1[i] != str2[i])
        {
            count++;
        }
    }

    cout << count/2;
    return 0;
}