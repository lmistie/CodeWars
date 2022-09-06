#include "iostream"

struct Node{
    int val;
    Node *left = nullptr;
    Node *right = nullptr;
};

bool search(int n, Node *root){
    if(root == nullptr) return false;
    if(root->val == n) return true;
    if(root->val > n) return search(n, root->left);
    return search(n, root->right);
}

int main() {
    
}