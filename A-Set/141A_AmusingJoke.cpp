#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;


int main()
{	
	string str, str2, str3;
	cin >> str >> str2 >> str3;
	str += str2;
	sort(str.begin(), str.end());
	sort(str3.begin(), str3.end());
	if (str == str3)
	{
		cout<< "YES";
	} else {
		cout << "NO";
	}
return 0;
}