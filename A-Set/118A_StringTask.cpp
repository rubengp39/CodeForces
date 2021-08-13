#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str;
	string del = "aeiouy";
	string nString ="";
	cin >> str;
	for_each(str.begin(), str.end(), [](char & c) {
        c = ::tolower(c);
	});

	for (int i = 0; i < del.size(); ++i)
	{
		str.erase(remove(str.begin(), str.end(), del[i]), str.end());
	}

	for (int i = 0; i < str.size(); ++i)
	{
		nString = nString + "." + str[i];
	}
	
	cout << nString;
	return 0;
}