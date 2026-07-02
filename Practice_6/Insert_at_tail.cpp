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

void insert_at_tail(node* &head, node* &tail, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    //tail = tail->next;
    tail = newnode;

    //TC: O(n) for 1 insertion , n nodes will take O(n^2)
    // node* temp = head;
    // while(temp->next != NULL){
    //     temp = temp->next;
    // }
    // temp->next = newnode;
}

void print_linked_list(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    //node* head = NULL;
    node* head = new node(10);
    node* a = new node(20);
    // node* b = new node(30);
    node* tail = new node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 50);
    print_linked_list(head);
    cout << "Tail: " << tail->data << endl;
}