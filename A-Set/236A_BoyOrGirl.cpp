#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int k = 0;
	string a;
	cin >> a;

	for (int i = 0; i < a.length()-1; ++i)
	{
		for (int j = i+1; j < a.length(); ++j)
		{
			if(a[i] == a[j])
			{
				k++;
				break;
				
			}
		}
	}
	k = a.length() - k;
	if(k%2 == 0){
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}

	return 0;
}