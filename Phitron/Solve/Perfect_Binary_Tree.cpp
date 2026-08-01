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
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_BT()
{
    int val;
    cin >> val;
    Node *root;
    queue<Node *> q;
    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft = NULL;
        Node *myright = NULL;
        if (l != -1)
            myleft = new Node(l);
        if (r != -1)
            myright = new Node(r);
        parent->left = myleft;
        parent->right = myright;
        if (myleft)
            q.push(myleft);
        if (myright)
            q.push(myright);
    }
    return root;
}

bool isSpecialBinaryTree(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (!curr->left && curr->right)
            return false;
        if (curr->left && !curr->right)
            return false;
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = input_BT();
    if (isSpecialBinaryTree(root))
        YES else NO return 0;
}