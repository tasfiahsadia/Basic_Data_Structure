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

void collect_level_nodes(Node* root, int target_level, int current_level, vector<int>& result){
    if(root == NULL)
        return;
    if(current_level == target_level){
        result.push_back(root->val);
        return;
    }
    collect_level_nodes(root->left, target_level, current_level + 1, result);
    collect_level_nodes(root->right, target_level, current_level + 1, result);
}

int main(){
    Node* root = input_tree();

    int level;
    cin >> level;

    vector<int> result;
    collect_level_nodes(root, level, 0, result);

    if(result.empty()){
        cout << "Invalid" << endl;
    }
    else{
        for(int i = 0; i < result.size(); i++){
            cout << result[i];
            if(i != result.size() - 1)
                cout << " ";
        }
    }
}