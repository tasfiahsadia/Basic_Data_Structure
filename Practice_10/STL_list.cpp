#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int> l;
    // list<int> l(10); //(size)
    list<int> l(4,3); //(size, value)
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;

    // for(auto it=l.begin(); it!=l.end(); it++){
    //     cout << *it << " ";
    // }

    for(int val : l){
        cout << val << endl;
    }

    list<int> l1 = {1,2,3,4,5};
    list<int> l2(l1);

    // int a[] = {10,20,30};
    // list<int> l3(a, a+3);

    // vector<int> v = {100,200,300};
    // list<int> l4(v.begin(), v.end());

    // l1.clear();
    // cout << l1.size() << endl;
    // if(l1.empty()){
    //     cout << "Empty" << endl;
    // }

    l1.resize(7);
    l1.resize(9, 100);

    for(int val : l2){
        cout << val << endl;
    }
}