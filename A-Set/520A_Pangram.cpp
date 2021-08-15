#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;


int main()
{	
	string str = "", latin = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	set<char> s;
	cin >> n;
	cin >> str;

	sort(str.begin(), str.end());
	for_each(str.begin(), str.end(), [](char & c) {
        c = ::toupper(c);
    });
	for (int i = 0; i < n; ++i)
	{
		s.insert(str[i]);
	}
if (s.size() >= latin.size())
	{
		cout << "YES";
	} else {
		cout << "NO";
	}

return 0;
}