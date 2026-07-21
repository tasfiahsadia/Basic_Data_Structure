#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int value;
        node* next;

        node(int val){
            this->value = val;
            this->next = NULL;
        }
};

class myQueue{
    public:
    node* head = NULL;
    node* tail = NULL;
    int size = 0;

    void push(int val){
        size++;
        node* newNode = new node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        size--;
        node* toDelete = head;
        head = head->next;
        delete toDelete;

        if(head == NULL)
            tail = NULL;
    }

    int front(){
        return head->value;
    }

    int back(){
        return tail->value;
    }

    int getSize(){
        return size;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    myQueue q;
    int n;
    cin >> n;    

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}