#include <bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

int main()
{
    char c;
    string s;
    cin >> c >> s; 
    if(c == 'L')
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'q':
                cout << "w";
                break;
            case 'w':
                cout << "e";
                break;
            case 'e':
                cout << "r";
                break;
            case 'r':
                cout << "t";
                break;
            case 't':
                cout << "y";
                break;
            case 'y':
                cout << "u";
                break;
            case 'u':
                cout << "i";
                break;
            case 'i':
                cout << "o";
                break;
            case 'o':
                cout << "p";
                break;
            case 'p':
                cout << "a";
                break;
            case 'a':
                cout << "s";
                break;
            case 's':
                cout << "d";
                break;
            case 'd':
                cout << "f";
                break;
            case 'f':
                cout << "g";
                break;
            case 'g':
                cout << "h";
                break;
            case 'h':
                cout << "j";
                break;
            case 'j':
                cout << "k";
                break;
            case 'k':
                cout << "l";
                break;
            case 'l':
                cout << ";";
                break;
            case ';':
                cout << "z";
                break;
            case 'z':
                cout << "x";
                break;
            case 'x':
                cout << "c";
                break;
            case 'c':
                cout << "v";
                break;
            case 'v':
                cout << "b";
                break;
            case 'b':
                cout << "n";
                break;
            case 'n':
                cout << "m";
                break;
            case 'm':
                cout << ",";
                break;
            case ',':
                cout << ".";
                break;
            case '.':
                cout << "/";
                break;
            case '/':
                cout << "q";
            default:
                break;
            }
        }
        return 0;
    }
    else if(c == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'q':
                cout << "/";
                break;
            case 'w':
                cout << "q";
                break;
            case 'e':
                cout << "w";
                break;
            case 'r':
                cout << "e";
                break;
            case 't':
                cout << "r";
                break;
            case 'y':
                cout << "t";
                break;
            case 'u':
                cout << "y";
                break;
            case 'i':
                cout << "u";
                break;
            case 'o':
                cout << "i";
                break;
            case 'p':
                cout << "o";
                break;
            case 'a':
                cout << "p";
                break;
            case 's':
                cout << "a";
                break;
            case 'd':
                cout << "s";
                break;
            case 'f':
                cout << "d";
                break;
            case 'g':
                cout << "f";
                break;
            case 'h':
                cout << "g";
                break;
            case 'j':
                cout << "h";
                break;
            case 'k':
                cout << "j";
                break;
            case 'l':
                cout << "k";
                break;
            case ';':
                cout << "l";
                break;
            case 'z':
                cout << ";";
                break;
            case 'x':
                cout << "z";
                break;
            case 'c':
                cout << "x";
                break;
            case 'v':
                cout << "c";
                break;
            case 'b':
                cout << "v";
                break;
            case 'n':
                cout << "b";
                break;
            case 'm':
                cout << "n";
                break;
            case ',':
                cout << "m";
                break;
            case '.':
                cout << ",";
                break;
            case '/':
                cout << ".";
                break;
            default:
                break;
            }
        } 
        return 0;
    }
    return 0;
}