#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ts = 1;
  int te;
  cin >> te;
  while (ts <= te)
  {
    string str1, str1New;
    string str2, str2New;
    cin >> str1 >> str2;
    str1New = str1;
    str2New = str2;
    sort(str1New.begin(), str1New.end());
    sort(str2New.begin(), str2New.end());
    auto res1 = unique(str1New.begin(), str1New.end());
    auto res2 = unique(str2New.begin(), str2New.end());
    str1New = string(str1New.begin(), res1);
    str2New = string(str2New.begin(), res2);

    // cout << str1New << " " << str2New << endl;
    if (str1New != str2New)
    {
      if (str1 != str2)
      {
        cout << "Case #" << ts << ": "
             << "IMPOSSIBLE"
             << "\n";
      }
    }
    else
    {
      if (str1 <= str2)
        cout << "Case #" << ts << ": " << (str2.length() - str1.length()) << "\n";
      else
      {
        cout << "Case #" << ts << ": "
             << "IMPOSSIBLE"
             << "\n";
      }
    }
    ts++;
  }

  return 0;
}