#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n;
        cin >> n;
        vector<int> arr;
        for(int i = 1; i <= n; i++){
            arr.push_back(i);
        }
        if(n%2){
            cout << "YES" << "\n";
            for(int i=1;i<=(n/2);i++){
                cout << i << " ";
            }

            cout << n << " ";
            
            for(int i=n-1;i>(n/2);i--){
                cout << i << " ";
            }
            cout << "\n";
        }
        else if(n != 2){
            cout << "YES" << "\n";
            cout << (n/2) << " ";

            for(int i=1;i<(n/2);i++){
                cout << i << " ";
            }

            for(int i = n; i > (n/2); i--){
                cout << i << " ";
            }
            
            cout << "\n";
        }
        else{
            cout << "NO" << "\n";

        }
    }
    return 0;
}