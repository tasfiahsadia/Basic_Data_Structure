#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 20, 20, 30, 10, 30, 40, 50, 10};
    // l.remove(10);
    // l.sort(); //ascending order
    // l.sort(greater<int>()); //descending order
    // l.unique(); //remove duplicates, only works on sorted list
    l.reverse(); 

    for(int val : l){
        cout << val << endl;
    }
}