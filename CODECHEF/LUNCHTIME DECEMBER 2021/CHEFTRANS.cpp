#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int X,Y;
    int Z;
    while(n--){
        cin>>X>>Y>>Z;
        if(X+Y<Z){
            cout<<"PLANEBUS"<<"\n";
        }
        else if(Z<X+Y){
            cout<<"TRAIN"<<"\n";
        }
        else if(Z==X+Y){
            cout<<"EQUAL"<<"\n";
        }
    }
    return 0;
}