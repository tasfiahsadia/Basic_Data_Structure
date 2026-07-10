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

// void print_linked_list(node* head){
//     node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }
void print_reverse(node* temp){
    if(temp == NULL){ //base case
        return;
    }
    print_reverse(temp->next); //recursion
    cout << temp->data << endl;
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    int val;
    while(true){ //O(N)
        cin >> val;
        if(val == -1) 
            break;
        insert_at_tail(head, tail, val); //O(1)
    }
    print_reverse(head);
}