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

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        if (val == -1)
            break;
        cin >> val;
        Insert_at_tail(head, tail, val);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (max < temp->val)
            max = temp->val;
        if (min > temp->val)
            min = temp->val;

        temp = temp->next;
    }
    cout << max - min << endl;

    return 0;
}