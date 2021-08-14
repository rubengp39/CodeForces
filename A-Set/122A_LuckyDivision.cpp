#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int k;
	cin >> k;
	bool isS = false;
	vector<int> v= {4,7,44,47,74,77,444,447,474,477,777,774,744,747};
	for (int i = 0; i < v.size() ; ++i)
	{
		if(k% v[i] == 0)
		{
			isS = true;
			break;
		}
	}
	
	if (isS)
	{
		cout << "YES" << '\n';
	} else {

		cout << "NO" << '\n';
	}

	
return 0;
}