#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
using namespace std;

int main()
{
    lli size_of_string;
    string stringName;
    string newString;
    cin >> stringName;

    size_of_string = stringName.length();

    lli count = 0;

    lli noOfBoys = 0;
    lli noOfGirls = 0;
    for (int iterator = 0; iterator <= size_of_string; iterator++)
    {
        if (stringName[iterator] == 'B')
        {
            noOfBoys++;
        }
        else
        {
            noOfGirls++;
        }
    }

    if (size_of_string % 2 == 1)
    {
        if (noOfGirls > noOfBoys)
        {
            for (int iterator = 1; iterator <= size_of_string; iterator++)
            {
                if (iterator % 2 == 1)
                {
                    newString.pb('G');
                }
                else
                {
                    newString.pb('B');
                }
            }
        }

        else
        {
            for (int iterator = 1; iterator < size_of_string; iterator++)
            {
                if (iterator % 2 == 1)
                {
                    newString.pb('B');
                }
                else
                {
                    newString.pb('G');
                }
            }
        }
    }
    else
    {
        if (stringName[0] == 'B')
        {
            for (int iterator = 1; iterator <= size_of_string; iterator++)
            {
                if (iterator % 2 == 1)
                {
                    newString.pb('B');
                }
                else
                {
                    newString.pb('G');
                }
            }
        }

        else
        {
            for (int iterator = 1; iterator <= size_of_string; iterator++)
            {
                if (iterator % 2 == 1)
                {
                    newString.pb('B');
                }
                else
                {
                    newString.pb('G');
                }
            }
        }
    }

    for (int iterator = 0; iterator < size_of_string; iterator++)
    {
        if (stringName[iterator] != newString[iterator])
        {
            count++;
        }
    }

    cout << count / 2;
    return 0;
}