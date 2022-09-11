#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> array(n + 2, 1);
        for (int i = 1; i <= n; i++){
            cin >> array[i];
        }
        int i = 1, current = 1;
        while (i <= n){
            if (current){
                array[i] = array[i + 1] * 2;
                i = i+2;
            }
            else{
                array[i] = array[i - 1] * 2;
                i++;
            }
            current = 1 - current;
        }
        for (int i = 1; i <= n; i++){
            cout << array[i] << " ";
        }
        cout<<"\n";
    }
    return 0;
}