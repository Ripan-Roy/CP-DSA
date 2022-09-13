#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> arr(3);
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }   
        sort(arr.begin(),arr.end());
        if(arr[1]!=arr[2])
        {
            cout << "NO" <<"\n";
        }
        else
        {
            cout << "YES" <<"\n";
            cout << arr[0] << " " << arr[0] << " " << arr[2] <<"\n";         
        }

    }

    return 0;
}