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

int count_nodes(Node* root){
    if(root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int find_depth(Node* root){
    if(root == NULL)
        return -1;
    int l = find_depth(root->left);
    int r = find_depth(root->right);
    return max(l, r) + 1;
}

int main(){
    Node* root = input_tree();

    int total_nodes = count_nodes(root);
    int depth = find_depth(root);

    int expected_nodes = pow(2, depth + 1) - 1;

    if(total_nodes == expected_nodes)
        cout << "YES";
    else
        cout << "NO";
}