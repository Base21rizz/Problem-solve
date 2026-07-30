#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

class myStack
{
public:
    list<int> li;
    void push(int val) { li.push_back(val); }

    void pop() { li.pop_back(); }

    int size() { return li.size(); }

    bool empty() { return li.empty(); }

    int top() { return li.back(); }
};

signed main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}