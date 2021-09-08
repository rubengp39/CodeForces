#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    string key;
    map<string, int> phoneBook;
    for(int i = 0; i < n; i++)
    {
        string a;
        int b;
        cin >> a;
        cin >> b;
        phoneBook[a] = b;
    }
    while(cin >> key)
    {
        if(phoneBook.find(key) != phoneBook.end())
        {
            cout << key << '=' << phoneBook.find(key)->second << '\n';
        }
        else 
        {
            cout << "Not found" << '\n';
        }
    }
    return 0;
}
