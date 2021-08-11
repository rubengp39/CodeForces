#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
	
	int n, k, m;
	int c = 0;
	cin >> n >> k;
	int a[n];
 
 
 
 
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];	
 
	}
 
	for (int i = 0; i < n; ++i)
	{
		if ((a[i] > 0))
		{
			if (i<k){
			c++;	
		} else if(a[i] == a[k-1]){
			c++;
		}
		}
		
	}
 
	cout << c;
	
}