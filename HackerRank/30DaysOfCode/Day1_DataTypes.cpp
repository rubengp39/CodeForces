#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    
    // Declare second integer, double, and String variables.
        int i2;
        double d2;
        string str;
    // Read and save an integer, double, and String to your variables.
        cin >> i2 >> d2;
        cin.ignore();
        getline(cin, str);
    // Print the sum of both integer variables on a new line.
        cout << i+i2 << '\n';
    // Print the sum of the double variables on a new line.
        cout <<fixed << setprecision(1)<< d+d2 << '\n';
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
        s = s + str;
        cout << s << '\n';
    return 0;
}