#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
 
	
	ll m, n;
	cin >> m >> n;
	ll c = 0;
	ll mult = m*n*0.5;
	
	if(n%2 == 0){
		c = mult;
	} else {
		c = (n-1)*(m*0.5) + m/2;
	}
 
	cout << c;
	
}