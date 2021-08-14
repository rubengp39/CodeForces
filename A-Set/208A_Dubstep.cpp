#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str, toErase = "WUB";
	cin >> str;
	int pos = string::npos;

	while ((pos  = str.find(toErase) )!= string::npos)
    {
        str.replace(pos, toErase.length(), " ");
    }
    cout << str;

return 0;
}