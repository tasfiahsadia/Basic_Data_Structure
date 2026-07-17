#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 20, 30, 40, 50};
    cout << l.front() << endl; // *l.begin()
    cout << l.back() << endl; 
    cout << *next(l.begin(), 2) << endl; //accessing 3rd element
}