#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v;
    // cout << v.capacity() << endl;
    // v.push_back(1);
    // cout << v.capacity() << endl;
    // v.push_back(2);
    // cout << v.capacity() << endl;
    // v.push_back(3);
    // cout << v.capacity() << endl;
    // v.push_back(4);
    // cout << v.capacity() << endl;
    // v.push_back(5);
    // cout << v.capacity() << endl;
    // v.push_back(6);
    // cout << v.capacity() << endl;
    // v.push_back(7);
    // cout << v.capacity() << endl;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    // cout << v.size() << endl;
    // v.clear(); //size 0 kore but value thake
    // cout << v.size() << endl;
    // cout << v[2];

    v.resize(4);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.resize(7, -1);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}
