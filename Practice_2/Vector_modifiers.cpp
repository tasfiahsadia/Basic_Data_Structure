#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    // vector<int> v1;
    // v1 = v;

    // v.insert(v.begin()+2, 100); //2nd index e 100 insert korbe
    // vector<int> v1 = {10,20,30};
    // v.insert(v.begin()+2, v1.begin(), v1.end()); // v er 2nd pos e v1 insert krbe

    // v.erase(v.begin()+2, v.begin()+4);
    
    // replace(v.begin(), v.end(), 2, 100); 
    // for(int x : v)//index chara normally array print kore
    //     cout << x << endl;

    // auto it = find(v.begin(), v.end(), 10);
    // // cout << *it << endl;
    // if(it == v.end())
    //     cout << "Not found" << endl;
    // else
    //     cout << "Found" << endl;

    //cout << v[2] << endl;
    //cout << v.front() << endl;
    //cout << v.back() << endl;
    
    for(auto it = v.begin(); it<v.end(); it++)
        cout << *it << " ";
}