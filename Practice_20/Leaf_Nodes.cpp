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

void values_of_leaf_nodes(Node* root, vector<int>& leaves){
    if(root == NULL)
        return;
    if(root->left == NULL && root->right == NULL){
        leaves.push_back(root->val);
        return;
    }
    values_of_leaf_nodes(root->left, leaves);
    values_of_leaf_nodes(root->right, leaves);
}

void print_reverse(vector<int>& leaves, int i){
    if(i == leaves.size())
        return;
    print_reverse(leaves, i+1); 
    cout << leaves[i]; 
    if(i != 0)
        cout << " ";
}

int main(){
    Node* root = input_tree();
    vector<int> leaves;
    values_of_leaf_nodes(root, leaves);

    sort(leaves.begin(), leaves.end());

    print_reverse(leaves, 0);
}