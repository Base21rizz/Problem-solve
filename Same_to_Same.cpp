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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

bool check_if_same(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    int count1 = 0, count2 = 0;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head1, tail1, val);
        count1++;
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head2, tail2, val);
        count2++;
    }
    bool flag = check_if_same(head1, head2);
    if (count1 != count2)
        NO else
        {
            if (flag == true)
                YES else NO
        }
    return 0;
}