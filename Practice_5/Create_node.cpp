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

int main(){
    node a(1), b(2), c(3);

    a.next = &b;
    b.next = &c;

    cout << a.value << endl;
    cout << a.next->value << endl;
    cout << a.next->next->value << endl;
}