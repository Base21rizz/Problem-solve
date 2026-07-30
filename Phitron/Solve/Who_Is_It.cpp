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
    int id;
    string name;
    string sec;
    int totalMarks;
    Student(int id, string name, string sec, int totalMarks)
    {
        this->id = id;
        this->name = name;
        this->sec = sec;
        this->totalMarks = totalMarks;
    }
};

bool compareStudent(Student &a, Student &b)
{
    if (a.totalMarks != b.totalMarks)
        return a.totalMarks > b.totalMarks;
    return a.id < b.id;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int id;
        string name;
        string sec;
        int totalMarks;
        cin >> id >> name >> sec >> totalMarks;
        Student *s1 = new Student(id, name, sec, totalMarks);

        cin >> id >> name >> sec >> totalMarks;
        Student *s2 = new Student(id, name, sec, totalMarks);

        cin >> id >> name >> sec >> totalMarks;
        Student *s3 = new Student(id, name, sec, totalMarks);

        vector<Student> students = {
            *s1, *s2, *s3};
        sort(students.begin(), students.end(), compareStudent);

        cout << students[0].id << " " << students[0].name << " " << students[0].sec << " " << students[0].totalMarks;

        cout << " " << endl;
    }
    return 0;
}
