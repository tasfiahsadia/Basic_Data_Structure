#include<bits/stdc++.h>
using namespace std;

void fun(int* p){
    //*p = 100;
    int y = 20;
    p = &y;
    //cout << "Func: " << *p << endl;
    cout << "Func: " << &p << endl;
}

int main(){
    int x = 10;
    int* p = &x;
    fun(p);
    //cout << "Main: " << x << endl;
    cout << "Main: " << &p << endl;
}

// void fun(int* &p){
//     p = NULL;
// }

// int main(){
//     int x = 10;
//     int* p = &x;
//     fun(&p);
//     cout << "Main: " << *p << endl;
// }