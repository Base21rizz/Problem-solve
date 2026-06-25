#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;
struct Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int serial;
};

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    Student arr[n];
    char x;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> x >> arr[i].id;
        s += x;
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        arr[i].section = s[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << endl;
    }

    return 0;
}