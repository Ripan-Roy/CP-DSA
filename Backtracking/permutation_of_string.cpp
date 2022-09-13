#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void findPermutations(string str, int left, int right){
    if(left==right){
        cout<<str<<" ";
    }
    else{
        for(int i = left ; i <= right ; i++){
            swap(str[left], str[i]);

            findPermutations(str, left+1, right);

            swap(str[left], str[i]);
        }
    }
}

int main(){
    string str;
    cin >> str;
    int n = str.size();

    findPermutations(str, 0, n-1);
    getch();
    return 0;
}