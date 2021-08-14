#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n, k, one = 0, two = 0, three = 0, four = 0, cont = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k == 1)
		{
			one++;
		} else if (k == 2)
		{
			two++;
		}else if (k == 3)
		{
			three++;
		}else if (k == 4)
		{
			four++;
		}
	}

	cont = four;
	if (three >= one)
	{
		cont += three;
		one = 0;
	} else {
		cont += three;
		one -= three;
	}

	if (two % 2  == 0)
	{
		cont += two/2;
	} 
	if (two % 2 != 0){
	 if (one <=2){
		cont += two/2 +1;
		one = 0;
	} else {
		cont += two/2 +1;
		one -=2;
	}
}

	if(one % 4 == 0)
	{
		cont += one/4;
	} else {
		cont += one/4 +1;
	}


	cout << cont;

return 0;
}