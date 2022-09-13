#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return ((1<<pos) & n)!=0 ;
}
int setBit(int n, int pos){
    return ( n | (1<<pos));
}
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return n&mask; 
}
int updateBit(int n, int pos, int update){
    int mask = ~(1<<pos);
    n = n & mask;
    return (update<<pos) | n;
}

int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}