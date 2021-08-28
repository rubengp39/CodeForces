#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    while(n--)
    { 
    string str, o = "" , e = "" ; cin >> str;
    for(int i = 0; i < str.size(); ++i)
    {
        if(i%2)
        {
            o.push_back(str[i]);
        } else {
            e.push_back(str[i]);
        }
    }
    cout << e << " " << o << '\n';
    }
    return 0;
}
