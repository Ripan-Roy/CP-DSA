#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int index = 0;
    int gap = 1;
    while (index < n){
        cout << str[index]; 
        index += gap;
        gap++;
    }
    return 0;
}