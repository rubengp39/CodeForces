#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string res;
    int h = stoi(s.substr(0,2));
    if(s.find('P') != string::npos)
    {
        
        h +=12;
        if(h < 24){
            res = to_string(h) + s.substr(2,s.size()-4);
        } else 
        {
            res = "12" + s.substr(2,s.size()-4);
        }
        
    }
     else 
     {
         if(h == 12)
         {
            res = "00" + s.substr(2,s.size()-4);
         } else
         {
            res = s.substr(0,s.size()-2);
         }
         
     }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
