#include <bits/stdc++.h>
using namespace std;
typedef long long int64;

void solve()
{
	int64 n;
	cin >> n;
	vector<int64> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (n == 1)
	{
		cout << a[0] << endl;
		return;
	}
	int64 sum = max(0LL, a[0]), res = a[0];
	for (int i = 1; i < n; i++)
		if ((a[i] & 1) + (a[i - 1] & 1) & 1 && sum + a[i] > 0)
		{
			sum += a[i];
		}
		else
		{
			sum = max(a[i], 0LL);
		}
	res = max(sum, res);
	cout << res << endl;
}


int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
		solve();
}