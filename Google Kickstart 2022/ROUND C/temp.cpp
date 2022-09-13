#include <iostream>
#include <regex>
using namespace std;

int main()
{
    int ts = 1;
    int te;
    cin >> te;
    while (ts <= te)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
        string ans;
        if(n<7)
        {
            ans = str+
        }
        if (regex_match(str, pattern))
        {
            ans = str;
        }
        else
        {
            str.push_back('a');
            str.push_back('A');
            str.push_back('&');
        }

        ts++;
    }
    return 0;
}
