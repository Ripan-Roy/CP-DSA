#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        string str;
        cin >> str;
        if (str.back() == 'A' || str.back() == 'a' || str.back() == 'E' || str.back() == 'e' || str.back() == 'I' || str.back() == 'i' || str.back() == 'O' || str.back() == 'o' || str.back() == 'U' || str.back() == 'u')
        {
            cout << "Case #" << ts << ": " << str << " is ruled by Alice."<<"\n";
        }
        else if (str.back() == 'Y' || str.back() == 'y')
        {
            cout << "Case #" << ts << ": " << str << " is ruled by nobody."<<"\n";
        }
        else
        {
            cout << "Case #" << ts << ": " << str << " is ruled by Bob."<<"\n";
        }
        ts++;
    }
    return 0;
}