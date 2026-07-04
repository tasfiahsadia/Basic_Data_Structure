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

void find_index(Node *head, int x)
{
    Node *temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (temp->value == x)
        {
            cout << index << endl;
            return;
        }
        temp = temp->next;
        index++;
    }
    cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (cin >> val){
            if (val == -1)
                break;
            insert(head, tail, val);
        }
        int x;
        cin >> x;
        find_index(head, x);
    }
}