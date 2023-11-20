/*
You are given an array A of N elements. For any ordered triplet (i,j,k) such that i, j, and k are pairwise distinct and 1≤i,j,k≤N, the value of this triplet is (Ai−Aj)⋅Ak. You need to find the maximum value among all possible ordered triplets.

Note: Two ordered triplets (a,b,c) and (d,e,f) are only equal when a=d and b=e and c=f. As an example, (1,2,3) and (2,3,1) are two different ordered triplets.

Input Format
The first line of the input contains a single integer T - the number of test cases. The test cases then follow.
The first line of each test case contains an integer N.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, output the maximum value among all different ordered triplets.

Constraints
1<=T=100
3<=N<=3*10^5
1<=Ai<=10^6
Sum of N over all testcases won't exceed 3⋅105.
Subtasks
Subtask 1 (30 points): Sum of N over all cases won't exceed 2000.
Subtask 2 (70 points): Original constraint
Sample Input 1 
3
3
1 1 3
5
3 4 4 1 2
5
23 17 21 18 19
Sample Output 1 
2
12
126
Explanation
Test case 1: The desired triplet is (3,2,1), which yields the value of (A3−A2)⋅A1=(3−1)⋅1=2.
Test case 2: The desired triplet is (2,4,3), which yields the value of (A2−A4)⋅A3=(4−1)⋅4=12.
Test case 3: The desired triplet is (1,2,3), which yields the value of (A1−A2)⋅A3=(23−17)⋅21=126.
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin.tie(NULL);
    cin>>T; 
    while(T--){
        long  n;
        cin>>n;
        long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long ans = (long)((arr[n-1]-arr[0])*arr[n-2]);
        cout<<ans<<endl;
    }
    return 0;
}