#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define pb push_back
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;

        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int size() { return sz; }

    int top() { return tail->val; }

    bool empty() { return head == NULL; }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz)
            return false;
        else
            return true;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
};

signed main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if (n != m)
        cout << "NO" << endl;
    else
    {
        while (n--)
        {
            if (st.top() != q.front())
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}