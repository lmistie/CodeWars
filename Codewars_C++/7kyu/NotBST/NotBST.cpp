#include "iostream"
#include "vector"
#include "cstddef"

struct Node{
int val;
Node *left, *right = NULL;
};

bool search(int n, Node *root){

if (!root) {
return false;
}
else{
if (root->val == n) {
return true;
}
}
return (search(n, root->right) || search(n, root->left));
}

int main () {
    Node *root = new Node();
    root->val = 5;
    root->left = new Node();
    root->left->val = 3;
    root->right = new Node();
    root->right->val = 7;
    root->left->left = new Node();
    root->left->left->val = 2;
    root->left->right = new Node();
    root->left->right->val = 4;
    root->right->left = new Node();
    root->right->left->val = 6;
    root->right->right = new Node();
    root->right->right->val = 8;
    std::cout << search(3, root) << std::endl;
    return 0;
}