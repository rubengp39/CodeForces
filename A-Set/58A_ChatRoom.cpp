#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str;
	bool sayHello = false;
	cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == 'h')
		{
			for (int j = i+1; j < str.size(); ++j)
			{
				if (str[j] == 'e')
				{
					for (int k = j+1; k < str.size(); ++k)
					{
						if (str[k] == 'l')
						{
							for (int l = k+1; l < str.size(); ++l)
							{
								if (str[l] == 'l')
								{
									for (int z = l+1; z < str.size(); ++z)
									{
										if (str[z] == 'o')
										{
											sayHello = true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	if (sayHello)
	{
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}