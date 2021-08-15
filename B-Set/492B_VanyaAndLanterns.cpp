#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;


int main()
{	
	int n, l, k;
	double max;
	vector<int> v;
	cin >> n >> l;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n-1; ++i)
	{
		double a = (double)(v[i+1] - v[i])/2;
		if ( a > max)
		{
			max = a;
		}
	}
	
	if (max < (double)l-v[n-1])
	{
		max = (double)l-v[n-1];
	}
	if (max < (double)v[0])
	{
		max = (double)v[0];
	}

	cout << setprecision(11)<< max;
	
return 0;
}