#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str, sol = "HQ9";
	cin >> str;
	bool isW = false;
	for (int i = 0; i < str.size(); ++i)
	{
		for (int j = 0; j < sol.size(); ++j)
		{
			if (str[i] == sol[j])
			{
				isW = true;
				break;
			}
		}
	}

if (isW)
{
	cout << "YES";
} else {
	cout << "NO";
}


return 0;
}