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

void print_levels_val(Node *root, int givenLevel)
{
    int max_level = 0;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *curr = parent.first;
        int level = parent.second;
        max_level = max(max_level, level);
        if (level == givenLevel)
            cout << curr->val << " ";
        if (curr->left)
            q.push({curr->left, level + 1});
        if (curr->right)
            q.push({curr->right, level + 1});
    }
    if (givenLevel > max_level)
        cout << "Invalid" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = input_BT();
    int x;
    cin >> x;
    print_levels_val(root, x);
}