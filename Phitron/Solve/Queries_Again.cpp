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
void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }

    cout << "L -> ";
    print_forward(head);

    cout << "R -> ";
    print_backward(tail);
}

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL)
    {
        delete newnode;
        cout << "Invalid" << endl;
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL)
        temp->next->prev = newnode;

    else
        tail = newnode;
    temp->next = newnode;

    cout << "L -> ";
    print_forward(head);

    cout << "R -> ";
    print_backward(tail);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int que;
    cin >> que;

    Node *head = NULL;
    Node *tail = NULL;

    while (que--)
    {
        int i, v;
        cin >> i >> v;
        if (i == 0)
            insert_at_head(head, tail, v);

        else
            insert_at_any_position(head, tail, i, v);
    }
    return 0;
}