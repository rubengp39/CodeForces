#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;


int main()
{	
	map<string, int> map {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
	int n, sum = 0;
	string str;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		sum += map[str];
	}

cout << sum;
return 0;
}