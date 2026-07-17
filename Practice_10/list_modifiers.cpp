#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1 = {1,2,3,4,5,66,77};

    // list<int> l3 = {10,20,30};
    // vector<int> v = {100,200,300};

    // list<int> l2;
    // // l2 = l1;
    // l2.assign(l1.begin(), l1.end());

    // l1.push_back(7); //insert tail
    // l1.push_front(-1); //insert head

    // l1.pop_back(); //delete tail
    // l1.pop_front(); //delete head

    // cout << *next(l1.begin(), 2) << endl; //accessing 3rd element
    //l1.insert(next(l1.begin(), 2), 100); //insert 100 before 3rd element

    // l1.insert(next(l1.begin(),2), v.begin(), v.end());
    //l1.insert(next(l1.begin(),2), l3.begin(), l3.end()); //insert l3 before 3rd element

    // l1.erase(next(l1.begin(),3)); //delete 3rd element
    // l1.erase(next(l1.begin(),2), next(l1.begin(),5)); //delete 3rd to 5th element

    // replace(l1.begin(), l1.end(), 66, 100); //replace 66 with 100

    auto it = find(l1.begin(), l1.end(), 200);
    if(it != l1.end()){
        // *it = 100; //replace 66 with 100
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    for(int val : l1){
        cout << val << endl;
    }
}