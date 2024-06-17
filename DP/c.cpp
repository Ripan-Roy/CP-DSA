#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int calculateDeesktopProductIDs(vector<char> &productID)
{
    int count = 0;
    for (int i = 0; i < productID.size(); i++)
    {
        if (!isVowel(productID[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int productID_size;
    cin >> productID_size;
    vector<char> productID(productID_size);
    for (int i = 0; i < productID_size; i++)
    {
        cin >> productID[i];
    }
    cout << calculateDeesktopProductIDs(productID) << endl;
    return 0;
}