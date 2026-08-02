#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myleft, *myright;

        if(l == -1) myleft = NULL;
        else myleft = new Node(l);

        if(r == -1) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return root;
}

void left_side(Node* node, vector<int>& result){
    if(node == NULL)
        return;
    result.push_back(node->val);
    if(node->left)
        left_side(node->left, result);
    else if(node->right)
        left_side(node->right, result);
}

void right_side(Node* node, vector<int>& result){
    if(node == NULL)
        return;
    result.push_back(node->val);
    if(node->right)
        right_side(node->right, result);
    else if(node->left)
        right_side(node->left, result);
}

int main(){
    Node* root = input_tree();

    vector<int> left_path, right_path;

    if(root->left)
        left_side(root->left, left_path);
    if(root->right)
        right_side(root->right, right_path);

    for(int i = left_path.size() - 1; i >= 0; i--){
        cout << left_path[i] << " ";
    }

    cout << root->val << " ";

    for(int i = 0; i < right_path.size(); i++){
        cout << right_path[i];
        if(i != right_path.size() - 1)
            cout << " ";
    }
}