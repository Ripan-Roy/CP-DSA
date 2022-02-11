#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    list<int> ans;
    while(t--){
        int n;
        cin>>n;
        list<int> li(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            li.push_back(x);
        }
        copy(li.begin(),li.end(),ans.begin());
        sort(ans.begin(),ans.end());

        for (auto it = ans.begin(); it != ans.end(); it++) {
        cout << *it << "->";
        }
    }

    return 0;

}