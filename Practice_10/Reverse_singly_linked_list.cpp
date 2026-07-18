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
    tail = newnode;
}

void print_linked_list(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void reverse_linked_list(node* &head, node* &tail, node* temp){
    if(temp->next == NULL){ //base case
        head = temp;
        return;
    }
    reverse_linked_list(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp; // Update the tail pointer to the new tail
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    int val;
    while(true){ //O(N)
        cin >> val;
        if(val == -1) 
            break;
        insert_at_tail(head, tail, val);
    }
    reverse_linked_list(head, tail, head);
    print_linked_list(head);
    cout << "Head = " << head->data << endl; 
    cout << "Tail = " << tail->data << endl;
}