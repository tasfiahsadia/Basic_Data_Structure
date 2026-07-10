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

void sort_linked_list(node* head){ //O(N^2)
    for(node* i = head; i->next != NULL; i = i->next){
        for(node* j = i->next; j->next != NULL; j = j->next){
            if(i->data > j->data)
                swap(i->data, j->data);
        }
    }
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
    sort_linked_list(head);
    print_linked_list(head); 
}