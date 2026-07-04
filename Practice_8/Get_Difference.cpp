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

void insert_tail(node* &head, node* &tail, int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void diff_max_min(node* head, int &max, int &min){
    if(head == NULL){
        max = 0;
        min = 0;
        return;
    }
    max = head->data;
    min = head->data;
    node* current = head;
    while(current != NULL){
        if(current->data > max){
            max = current->data;
        }
        if(current->data < min){
            min = current->data;
        }
        current = current->next;
    }
    cout << max - min;
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    int val;
    while(true){ 
        cin >> val;
        if(val == -1) 
            break;
        insert_tail(head, tail, val);
    }
    int max, min;
    diff_max_min(head, max, min);
}