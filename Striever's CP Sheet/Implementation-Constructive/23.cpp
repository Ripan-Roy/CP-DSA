#include <bits/stdc++.h>
using namespace std;
int n,h;
int main()
{
    int count=0;
	cin>>n;
	while (count <= n)
	{
		h++;
		count += (h*(h+1))/2;
	}
	cout<<h-1<<"\n";
	return 0;
}