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

void print_outer_left_tree(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
        print_outer_left_tree(root->left);
    else
        print_outer_left_tree(root->right);
    cout << root->val << " ";
}

void print_outer_right_tree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
        print_outer_right_tree(root->right);
    else
        print_outer_right_tree(root->left);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = input_BT();
    if (root->left)
        print_outer_left_tree(root->left);
    cout << root->val << " ";
    if (root->right)
        print_outer_right_tree(root->right);

    return 0;
}