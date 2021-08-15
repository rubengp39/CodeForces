#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;


int main()
{	
	int n, sum = 0, aux = 0;
	cin >> n;

while(n>0){
	if (n >= 100)
	{
		aux = n/100;
		sum += aux;
		n -= aux* 100;
	} else if (n>= 20) {
		aux = n/20;
		sum += aux;
		n -= aux* 20;
	} else if (n>= 10) {
		aux = n/10;
		sum += aux;
		n -= aux* 10;
	} else if (n>= 5) {
		aux = n/5;
		sum += aux;
		n -= aux* 5;
	} else if (n>= 1) {
		aux = n/1;
		sum += aux;
		n -= aux* 1;
	}
}

cout << sum;
return 0;
}