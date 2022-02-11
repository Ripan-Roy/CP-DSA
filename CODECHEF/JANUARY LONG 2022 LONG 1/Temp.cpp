#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int k;
        cin >> n >> k;
        int power = 1, rem;
        while (pow(2, power) < n){
            power++;
        }
        if (pow(2, power) == n){
            cout << 1 << " ";
            long long int ans = 1;
            k = k % power;
            for (int i = 2; i <= n; i++){
                ans = ans + pow(2, k);
                if (ans > n){
                    while (ans > n){
                        ans = ans - (n - 1);
                    }
                    cout << ans << " ";
                }
                else{
                    cout << ans << " ";
                }
            }
            cout << "\n";
        }
        else{
            int ans = 1, p, i;
            for (p = 2; p <= n; p++){
                for (i = 2; i <= n; i++){
                    ans = ans + pow(2, p);
                    if (ans > n){
                        while (ans > n){
                            ans = ans - (n - 1);
                        }
                        if (i == 2 && n - ans == (n - 2))
                            break;
                    }
                    else{
                        if (i == 2 && n - ans == (n - 2))
                            break;
                    }
                }
                if (i==2 && n - ans == (n-2))
                    break;
            }
            cout << 1 << " ";
            ans = 1;
            k = k % p;
            for (int i = 2; i <= n; i++){
                ans = ans + pow(2, k);
                if (ans > n){
                    while (ans > n){
                        ans = ans - (n - 1);
                    }
                    cout << ans << " ";
                }
                else{
                    cout << ans << " ";
                }
            }
            cout << "\n";
        }
    }
}