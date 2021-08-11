#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	int k;
	int c = 0;
	string r;
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		cin >> r;
		if(r.find("X") != string::npos){
 
			if(r.find("+") != string::npos){
				c++;
			} else if(r.find("-") != string::npos) {
				c--;
			}
	}
}
	
	cout << c;
}