#include<iostream>
#include<string>
#include<cctype>
#include<ctype.h>
using namespace std;
int main()
{
    string str;
    int upr = 0;
    int lwr = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            upr++;
        }
        else if (islower(str[i]))
        {
            lwr++;
        }
    }
    if (upr > lwr) {
        for (char &ch : str) ch = toupper(ch);  
    } 
    else {
        for (char &ch : str) ch = tolower(ch);
    } 
    cout << str;
    return 0;
}