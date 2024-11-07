// https://www.codewars.com/kata/5800580f8f7ddaea13000025/train/cpp
#include <iostream>
using namespace std;

struct node
{
    int value;
    node* left;
    node* right;
};

int sumTheTreeValues(node* root)
{
    if (root == nullptr)
        return 0;

    int sum = root->value;
    sum += sumTheTreeValues(root->left);
    sum += sumTheTreeValues(root->right);

    return sum;
}

int main()
{
    // Create the binary tree
    node* root = new node{10, nullptr, nullptr};
    root->left = new node{1, nullptr, nullptr};
    root->right = new node{2, nullptr, nullptr};

    // Calculate the sum
    int sum = sumTheTreeValues(root);

    // Print the result
    cout << "Sum of all values: " << sum << endl;

    // Clean up memory
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
//
int sumTheTreeValues(node* root) {
    if (root == nullptr)
        return 0;
    else
        return root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
}
//
int sumTheTreeValues(node* root) {
    return !root ? 0 : root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
}
