// https://www.codewars.com/kata/5acc79efc6fde7838a0000a0/train/cpp
struct Node{
    int val;
    Node *left = nullptr;
    Node *right = nullptr;
};

bool search(int n, Node *root){
    if (root == nullptr) {
        return false;
    }
    
    if (root->val == n) {
        return true;
    }
    
    return search(n, root->left) || search(n, root->right);
}
//
#include <deque>

struct Node{
    int val;
    Node *left = nullptr;
    Node *right = nullptr;
};

bool search(int n, Node* root){
    if (root == nullptr) return false;
    std::deque<Node*> q;
    q.push_back(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop_front();
        if (curr->val == n) return true;
        if (curr->left != nullptr) q.push_back(curr->left);
        if (curr->right != nullptr) q.push_back(curr->right);
    }
    return false;
}
//
struct Node{
    int val;
    Node *left = nullptr;
    Node *right = nullptr;
};

bool search(int n, Node *root){
    return root != nullptr && (root->val == n || search(n, root->left) || search(n, root->right));
}
