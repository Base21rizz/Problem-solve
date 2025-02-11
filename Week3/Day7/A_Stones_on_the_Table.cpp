#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int gu=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==s[i+1])
        {
            gu++;
        }      
    }
    cout << gu;
    return 0;
}
