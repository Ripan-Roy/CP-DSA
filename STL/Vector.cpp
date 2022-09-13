#include<iostream>
#include <vector>

using namespace std;
 int main(){
    
    vector<int> arr(1, 0);
    cout<<arr.size()<<endl;

    for(int i=1;i<9;i++){
      arr.push_back(i); //append the array size by adding an element to the last
    }
   for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++){
       arr.pop_back(); // shrink the array by removing an element from the last
    }
    for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
    }

    return 0;
 }