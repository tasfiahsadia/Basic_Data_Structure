#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size();
        }
        bool empty(){
            return v.empty();
        }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();

    if(!st.empty()) //not true(false)
        cout << st.top() << endl;
}