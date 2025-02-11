#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string r;
    cin >> s;
    cin >> r;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == r[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }  
    }
    return 0;
}