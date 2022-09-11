#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> salary;
    for(int i=0;i<salary.size();i++){
        int x;
        cin>>x;
        salary.push_back(x);
    }
    sort(salary.begin(),salary.end());
    salary.erase(salary.begin());
    salary.erase(salary.end());
    double sum = 0.0;
    accumulate(salary.begin(), salary.end(), sum);

    cout<< (double)(sum/salary.size()) << endl;
    return 0;
}