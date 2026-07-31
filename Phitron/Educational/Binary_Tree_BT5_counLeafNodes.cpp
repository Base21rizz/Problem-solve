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

int count_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}

Node *input_BT()
{
    int val;
    cin >> val;
    queue<Node *> q;
    Node *root = NULL;
    if (val != -1)
        root = new Node(val);
    q.push(root);
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
        if (myleft != NULL)
            q.push(myleft);
        if (myright != NULL)
            q.push(myright);
    }
    return root;
}

signed main()
{
    Node *root = input_BT();
    cout << count_leaf_nodes(root);
    return 0;
}