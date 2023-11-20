#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        char pos = 'E';
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                if(pos == 'N') pos = 'E';
                else if(pos == 'E') pos = 'S';
                else if(pos == 'S') pos = 'W';
                else if(pos == 'W') pos = 'N';
            }
            else 
            {
                if(pos == 'N') pos = 'W';
                else if(pos == 'W') pos = 'S';
                else if(pos == 'S') pos = 'E';
                else if(pos == 'E') pos = 'N';
            }
        }
        cout << pos << "\n";
    }
    return 0;
}