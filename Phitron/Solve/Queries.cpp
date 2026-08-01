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
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    if (head == NULL)
        tail = newNode;
    head = newNode;
}

void Insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void Delete_at_any_index(Node *&head, Node *&tail, int index)
{
    if (index < 0)
        return;
    Node *temp = head;
    if (index == 0)
    {
        Node *deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
        if (head == NULL)
            tail = NULL;
        return;
    }
    int count = 0;
    while (count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (deleteNode->next == NULL)
        tail = temp;
    delete deleteNode;
}

void Print_LL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    int currLLCount = 0;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            Insert_at_head(head, tail, v);
            currLLCount++;
        }
        else if (x == 1)
        {
            Insert_at_tail(head, tail, v);
            currLLCount++;
        }
        else if (x == 2)
        {
            if (currLLCount > 0 && currLLCount > v)
            {
                Delete_at_any_index(head, tail, v);
                currLLCount--;
            }
        }
        Print_LL(head);
        cout << endl;
    }
    return 0;
}