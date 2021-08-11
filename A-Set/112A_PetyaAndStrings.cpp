#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	
	string a, b;
	cin >> a >> b;
	
	for_each(a.begin(), a.end(), [] (char & c){
		c = ::tolower(c);
	});
 
    for_each(b.begin(), b.end(), [](char & c) {
        c = ::tolower(c);
    });
 
    if (a.compare(b) == 0){
    	cout << 0;
    } else if (a.compare(b) > 0){
    	cout << 1;
    } else if (a.compare(b) < 0){
    	cout << -1;
    }
	
}