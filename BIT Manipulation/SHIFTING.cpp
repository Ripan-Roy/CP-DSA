#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n>>i;
        cout<<n<<" << "<<i<<" = "<< (n<<i)<<endl;
        cout<<n<<" >> "<<i<<" = "<< (n>>i)<<endl;
    }

    return 0;
}