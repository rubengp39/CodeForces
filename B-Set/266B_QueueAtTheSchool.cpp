#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n,t;

	cin >> n >> t;

	string str;
	cin >> str;

	while(t--){
		for (int i = 1; i < str.size(); ++i)
		{	
			if (str[i] == 'G' && str[i-1] == 'B' )
			{
				str[i] = 'B';
				str[i-1] = 'G';
				i++;	
					
			}	
				
		}


	}
	cout << str << '\n';
	return 0;
}