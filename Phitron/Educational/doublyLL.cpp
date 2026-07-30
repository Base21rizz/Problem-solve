#include <bits/stdc++.h>
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

void insert_at_head(Node *&head, Node *&tail, int val)
{
	Node *newnode = new Node(val);
	if (head == NULL)
	{
		head = newnode;
		tail = newnode;
		return;
	}
	head->prev = newnode;
	newnode->next = head;
	head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
	Node *newnode = new Node(val);
	if (head == NULL)
	{
		tail = newnode;
		head = newnode;
		return;
	}
	tail->next = newnode;
	newnode->prev = tail;
	tail = newnode;
}

void insert_at_any_position(Node *head, int index, int val)
{
	Node *newnode = new Node(val);
	Node *temp = head;
	for (int i = 1; i < index; i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;
	newnode->prev = temp;
}

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

void delete_at_head(Node *&head, Node *&tail)
{
	Node *deleteNode = head;
	head = head->next;
	delete deleteNode;
	if (head == NULL)
	{
		tail = NULL;
		return;
	}
	head->prev = NULL;
}

void delete_at_tail(Node *&head, Node *&tail)
{
	Node *deleteNode = tail;
	tail = tail->prev;
	delete deleteNode;
	if (tail == NULL)
	{
		head = NULL;
		return;
	}
	tail->next = NULL;
}

void delete_at_any_index(Node *head, int index)
{
	Node *temp = head;
	for (int i = 1; i < index; i++)
	{
		temp = temp->next;
	}

	Node *deleteNode = temp->next;
	temp->next = deleteNode->next;
	deleteNode->next->prev = temp;
	delete deleteNode;
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
		insert_at_tail(head, tail, val);
	}

	print_forward(head);
	return 0;
}