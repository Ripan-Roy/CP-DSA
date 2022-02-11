#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool check_power2(int n)
{
    if((n & (n-1))==0)
        return true;
    else
        return false;
}

int next_power2(int n)
{
    int num=n, power=0;
    while (num!=0)
    {
        num>>=1;
        power++;
    }
    return power;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum=0, iterations=0;
        cin >> n;
        vector <int> v(n);
        for (int i = 1; i <= n; i++)
        {
            int item;
            cin >> item;
            sum+=item;
            v.push_back(item);
        }
        if(check_power2(sum))
        {
            cout<<iterations<<"\n";
        }
        else
        {
            int target=pow(2,next_power2(sum));
            int power=2;
            while (sum!=target)
            {
                vector<int> v2;
                for(int i=0; i<n; i++)
                {
                    sum+=v[i];
                    v[i]*=power;
                    iterations++;
                    if(sum<=target)
                        v2.push_back(i+1);
                    if(sum==target)
                        break;
                    if (sum>target)
                    {
                        sum-=v[i];
                        iterations--;
                    }
                }
                cout<<iterations<<" "<<power<<"\n";
                for(auto &it : v2)
                {
                    cout<<it<<" ";
                }
                cout<<"\n";
                iterations=0; power*=2; 
            }
            
        }
    }
}