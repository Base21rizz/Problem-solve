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

void Insert_at_tail(Node *&head, Node *&tail, int val) // pointer needs to be changed hence the use of &
{
    Node *newNode = new Node(val);
    if (head == NULL) // If there's no Nodes or LL's empty
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next; // can also use the newNode as tail.next is newNode
}

void Print_LL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void rev_ll(Node *&head, Node *&tail, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    rev_ll(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head, tail, val);
    }
    rev_ll(head, tail, head);
    Print_LL(head);
    return 0;
}