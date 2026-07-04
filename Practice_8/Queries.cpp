#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};

void insert_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_index(Node* &head, Node* &tail, int index){
    if(head == NULL || index < 0) 
        return;

    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    if(index >= len) 
        return;

    if(index == 0){
        Node* toDelete = head;
        head = head->next;
        if(head == NULL)
            tail = NULL;
        delete toDelete;
        return;
    }

    Node* prev = head;
    for(int i=0; i < index-1; i++){
        prev = prev->next;
    }
    Node* toDelete = prev->next;
    prev->next = toDelete->next;
    if(toDelete == tail){
        tail = prev;
    }
    delete toDelete;
}

void print_list(Node* head){
    Node* current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(x == 0)
            insert_head(head, tail, v);
        else if(x == 1)
            insert_tail(head, tail, v);
        else if(x == 2)
            delete_at_index(head, tail, v);

        print_list(head);
    }
}