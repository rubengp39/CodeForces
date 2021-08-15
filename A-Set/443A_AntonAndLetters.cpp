#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	string str, toErase = ", ";
	getline(cin, str);

	str = str.substr(1, str.size()-2);

	int pos = string::npos;

	while ((pos  = str.find(toErase) )!= string::npos)
    {
        str.erase(pos, toErase.length());
    }
    set<char> sStr;
    for (int i = 0; i < str.size(); ++i)
    {
    	sStr.insert(str[i]);
    }

	cout << sStr.size();
return 0;
}