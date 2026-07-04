#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

bool same_linked_lists(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->value != tmp2->value)
            return false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return (tmp1 == NULL && tmp2 == NULL);
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert(head1, tail1, val);
    }

    while (cin >> val)
    {
        if (val == -1)
            break;
        insert(head2, tail2, val);
    }

    if (same_linked_lists(head1, head2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}