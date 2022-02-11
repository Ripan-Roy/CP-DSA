#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d1,d2,t1,t2,DM1,DM2;
        cin>>d1>>t1>>DM1>>d2>>t2>>DM2;
        int sum1=d1+t1+DM1;
        int sum2=d2+t2+DM2;
        if(sum1>sum2){
            cout<<"Dragon\n";
        }
        else if(sum1==sum2){
            if(d1>d2){
                cout<<"Dragon\n";
            }
            else if(d1<d2){
                cout<<"Sloth\n";
            }
            else{
                if(t1>t2){
                    cout<<"Dragon\n";
                }
                else if(t1<t2){
                    cout<<"Sloth\n";
                }
                else{
                    cout<<"Tie\n";
                }
            }
        }
        else{
            cout<<"Sloth\n";
        }
    }

    return 0;
}