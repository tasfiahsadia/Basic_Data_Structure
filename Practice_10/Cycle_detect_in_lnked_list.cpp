#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;
    //node* prev;
    node(int val){
        this->val = val;
        this->next = NULL;
        //this->prev = NULL;
    }
};



int main(){
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c; // d, b,c
    c->next = d;
    d->next = a; //a, head, d

    node* slow = head;
    node* fast = head;
    bool cycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            //cycle detected
            cycle = true;
            break;
        }
    }

    if(cycle)
        cout << "Cycle detected";
    else
        cout << "No cycle detected";
}