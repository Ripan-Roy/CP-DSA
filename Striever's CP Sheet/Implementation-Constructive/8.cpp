#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        string str;
        cin>>str;
        if(str=="Icosahedron"){
            count+=20;
            continue;
        }
        else if(str=="Cube"){
            count+=6;
            continue;
        }
        else if(str=="Tetrahedron"){
            count+=4;
            continue;
        }
        else if(str=="Dodecahedron"){
            count+=12;
            continue;
        }  
        else if(str=="Octahedron"){
            count+=8;
            continue;
        }
    }
    cout<<count;
    return 0;

}