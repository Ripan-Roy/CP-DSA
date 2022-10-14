#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper()
{
    string str1, str2;
    cin >> str1 >> str2;
    int count1 = 0, count2 = 0;
    for (int i = 0, j = 0; i < str1.length(), j < str2.length(); i++, j++)
    {
        if (str1[i] == 'X')
        {
            count1++;
        }
        if (str2[j] == 'X')
        {
            count2++;
        }
    }
    if (str1[str1.length() - 1] == 'S' && str2[str2.length() - 1] == 'M')
    {
        cout << "<\n";
    }
    else if (str1[str1.length() - 1] == 'S' && str2[str2.length() - 1] == 'L')
    {
        cout << "<\n";
    }
    else if (str1[str1.length() - 1] == 'M' && str2[str2.length() - 1] == 'L')
    {
        cout << "<\n";
    }
    else if (str1[str1.length() - 1] == 'L' && str2[str2.length() - 1] == 'S')
    {
        cout << ">\n";
    }
    else if (str1[str1.length() - 1] == 'L' && str2[str2.length() - 1] == 'M')
    {
        cout << ">\n";
    }
    else if (str1[str1.length() - 1] == 'M' && str2[str2.length() - 1] == 'S')
    {
        cout << ">\n";
    }
    else
    {
        if (str1[str1.length() - 1] == 'S')
        {
            if (count1 == count2)
            {
                cout << "=\n";
            }
            else if (count1 > count2)
            {
                cout << "<\n";
            }
            else
            {
                cout << ">\n";
            }
        }
        else
        {
            if (count1 == count2)
            {
                cout << "=\n";
            }
            else if (count1 > count2)
            {
                cout << ">\n";
            }
            else
            {
                cout << "<\n";
            }
        }
    }
}

int main()
{
    fastIO;
    ll t;
    cin >> t;
    while (t--)
    {
        helper();
    }
    return 0;
}