#include <bits/stdc++.h>
using namespace std;

int XOR(int n){
    int mod = n % 4;
 
    if (mod == 0)
        return n;
 
    else if (mod == 1)
        return 1;

    else if (mod == 2)
        return n + 1;
 
    else if (mod == 3)
        return 0;
}
int main(){
 int T;
 cin>>T;
 while (T--){
     int n,x;
     cin>>n>>x;
     if(x== 5*pow(10,5)){
        int xr = XOR(n-2);
        for (int i = 1; i < n-1; i++){
            cout << i << ' ';
        }

        int ans1= pow(2,17);
        for (int i = 0; i < 17; i++){
            int k = xr>>i;
            if(k&1) ans1+=pow(2,i);
        }
        cout << ans1 << ' ' << 500000-pow(2,17) << "\n";
        continue;
     }
     if(x>100000){
         if(n%4==0){
             for (int i = 1; i < n; i++){
                 cout << i << ' ';
             }
             cout << x << "\n";
         }
         else if(n%4==1){
             for (int i = 0; i < n-1; i++){
                 cout << i << ' ';
             }
             cout << x << "\n";
         }
         else if (n%4==2){
             for (int i = 1; i < n; i++){
                 cout << i << ' ';
             }
             if(x%2==0) cout << x+1 << "\n";
             else cout << x-1 << "\n";
         }
         else{
             for (int i = 0; i < n-1; i++){
                 cout << i << ' ';
             }
                if(x%2==0) cout << x+1 << "\n";
             else cout << x-1 << "\n";
         }
     }
     else{
         if (n%4==0){
             if(x==1){
               for (int i = 3; i <= n-1; i++){
                   cout << i << ' ';
               }
               cout << "262143 131072 131069\n";
               continue;
             }
            int xt = pow(10,5)+3+1;
             for (int i = 0; i < n-2; i++, xt++){
                 cout << xt << ' ';
             }
             cout << "0 ";
             if(x%2==0) cout << x+1 << "\n";
             else cout << x-1 << "\n";
         }
         else if (n%4==1){
             int xt = pow(10,5)+3+1;
             for (int i = 0; i < n-1; i++, xt++){
                 cout << xt << ' ';
             }
             cout << x << "\n";
         }
        else if (n%4==2){
            int xt = pow(10,5)+3+1;
            for (int i = 0; i < n-2; i++, xt++){
                 cout << xt << ' ';
            }
            cout << x << " 0" << "\n";
        }
        else{
            int xt = pow(10,5)+3+1;
            for (int i = 0; i < n-1; i++, xt++){
                cout << xt << ' ';
             }
             if(x%2==0) cout << x+1 << "\n";
             else cout << x-1 << "\n";
        }
     }
 }
 
return 0;
}