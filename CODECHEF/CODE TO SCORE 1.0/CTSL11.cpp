#include <bits/stdc++.h>
using namespace std;
bool check_sum(int fr, int lt, int a[], int b[])
{
    int sum1=0, sum2=0;
    for(int i=fr; i<=lt; i++)
    {
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1==sum2)
        return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    int front=0, last=n-1, sum=0;
    while(front<last)
    {
        if(a[front]==b[front] && a[last]==b[last])
        {
            if(check_sum(front,last,a,b))
            {
                break;
            }
        }
        else
        {
            if(a[front]==b[front] && a[last-1]==b[last-1])
            {
                if(check_sum(front, last-1, a, b))
                {
                    --last;
                    break;
                }
            }
            else if(a[front+1]==b[front+1] && a[last]==b[last])
            {
                if(check_sum(front+1, last, a, b))
                {
                    ++front;
                    break;
                }
            }
            else
            {
                ++front;
                --last;
            }
        }
    }
    int ans=last-front+1;
    cout<<ans;
    return 0;
}