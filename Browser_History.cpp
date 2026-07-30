#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    list<string> li;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        li.push_back(s);
    }
    auto temp = li.begin();

    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        if (s.size() > 4)
        {
            stringstream ss(s);
            string ss1, ss2;
            ss >> ss1 >> ss2;
            auto flag = find(li.begin(), li.end(), ss2);
            if (flag == li.end())
                cout << "Not Available" << endl;
            else
            {
                temp = flag;
                cout << *temp << endl;
            }
        }
        else if (s == "prev")
        {
            if (temp == li.begin())
                cout << "Not Available" << endl;
            else
            {
                temp--;
                cout << *temp << endl;
            }
        }
        else
        {
            auto check = temp;
            check++;
            if (check == li.end())
                cout << "Not Available" << endl;
            else
            {
                temp++;
                cout << *temp << endl;
            }
        }
    }
    return 0;
}