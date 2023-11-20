#include <bits/stdc++.h>
using namespace std;

int largest_square(std::string s)
{
    int max_square = -1;
    for (int i = 0; i < 10; i++)
    {
        string num_str = s;
        num_str.replace(num_str.find('_'), 1, to_string(i));
        int num = std::stoi(num_str);
        if (sqrt(num) == int(sqrt(num)))
        {
            max_square = max(max_square, num);
        }
        size_t pos = num_str.find('_');
        if (pos != std::string::npos)
        {
            max_square = std::max(max_square, largest_square(num_str));
        }
    }
    return max_square;
}

int main()
{
    string str;
    cin >> str;
    cout << largest_square(str) << endl;
    return 0;
}
