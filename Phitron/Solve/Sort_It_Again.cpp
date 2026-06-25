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
    int mathMarks;
    int engMarks;
};

bool cmp(Student l, Student r)
{
    if (l.engMarks == r.engMarks)
    {
        if (l.mathMarks == r.mathMarks)
            return l.id < r.id;
        else
            return l.mathMarks > r.mathMarks;
    }
    else
        return l.engMarks > r.engMarks;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].mathMarks >> arr[i].engMarks;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].mathMarks << " " << arr[i].engMarks << endl;
    }

    return 0;
}