#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str;
	int res = 0;
	bool isA = false;
	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{
		for(int j = i+1; j < str.size(); ++j)
		{
			
			if (str[i] == str[j])
			{
				res++;
			} else {
				break;
			}
		}
			if (res >= 6)
			{
				isA =true;
				break;
			}else {
				res = 0;
			}
	}

	if (isA)
	{
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}