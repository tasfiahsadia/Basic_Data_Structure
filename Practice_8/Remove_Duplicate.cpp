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

void remove_duplicates(Node* head){
    if(head == NULL) 
        return;

    Node* temp1 = head;
    while(temp1 != NULL){
        Node* temp2 = temp1;
       
        while(temp2->next != NULL){
            if(temp2->next->data == temp1->data){
                Node* toDelete = temp2->next;
                temp2->next = temp2->next->next;
                delete toDelete;
            } 
            else 
                temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

void print_linked_list(Node* head){
    Node* current = head;
    while(current != NULL){
        cout << current->data;
        if(current->next != NULL) 
            cout << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val){
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_linked_list(head);
}