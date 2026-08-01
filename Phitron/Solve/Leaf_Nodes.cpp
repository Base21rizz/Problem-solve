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

int sum_without_leaf(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int count = 0;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (f->left || f->right)
            count += f->val;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return count;
}

vector<int> leaf_in_descending(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        if (!f->left && !f->right)
            v.push_back(f->val);
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    sort(v.begin(), v.end(), greater<int>());
    return v;
}

signed main()
{
    Node *root = input_BT();
    vector<int> v = leaf_in_descending(root);
    for (auto it : v)
        cout << it << " ";
    return 0;
}