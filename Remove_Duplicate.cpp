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
void Print_LL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

void delete_duplicate(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
        return;

    int index = 0;
    for (Node *i = head; i != NULL && i->next != NULL; i = i->next)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                prev->next = j->next;
                if (j->next == NULL)
                    tail = prev;
                delete j;
                j = prev->next;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }
        index++;
    }
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
    delete_duplicate(head, tail, val);

    Print_LL(head);
    return 0;
}