#include <bits/stdc++.h>
using namespace std;
void comb(int* arr, int len, int r,
          int ipos, int* op, int opos,
          int sum)
{
    if (opos == r) {
 
        int sum2 = 0;
        for (int i = 0; i < opos; i++) {
            sum2 = sum2 + op[i];
        }
 
        if (sum == sum2) {
            for (int i = 0; i < opos; i++)
                cout << op[i] << " ";
 
            cout << "\n";
        }
 
        return;
    }
    if (ipos < len) {

        comb(arr, len, r, ipos + 1,
             op, opos, sum);
 
        op[opos] = arr[ipos];
 
        comb(arr, len, r, ipos + 1,
             op, opos + 1, sum);
    }
}
 
// Driver Code
int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int K = 3;
 
 
    int op[n] = { -1 };
 
    comb(arr, n, K, 0, op, 0, sum);
    return 0;
}