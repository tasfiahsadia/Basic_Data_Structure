#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            this->data = val;
            this->next = NULL;
        }
};

void insert_at_anyPos(node* &head, int idx, int val){
    node* newnode = new node(val);
    node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_linked_list(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);

    head->next = a;
    a->next = b;

    insert_at_anyPos(head, 2, 100);
    print_linked_list(head);
}