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

int height_BT(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = height_BT(root->left);
    int r = height_BT(root->right);
    return max(l, r) + 1;
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

int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r) + 1;
}

signed main()
{
    Node *root = input_BT();
    cout << maxDepth(root);
    return 0;
}
