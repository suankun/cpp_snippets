// https://www.codewars.com/kata/57e5279b7cf1aea5cf000359/train/cpp
// You are given a binary tree. Implement a function that returns the maximum sum of a route from root to leaf.

// For example, given the following tree:

//     17
//    /  \
//   3   -10
//  /    /  \
// 2    16   1
//          /
//         13
// The function should return 23, since 17 -> -10 -> 16 is the route from root to leaf with the maximum sum.

// Return 0 if the tree is empty.

// Please note that you are not to find the best possible route in the tree, but the best possible route from root to leaf, e.g. for the following tree, you cannot skip the leaves and return 5 + 10 = 15: the expected answer is 5 + 4 + -60 = -51

//         5
//       /   \
//     4      10
//    / \     /
// -80 -60 -90
// A tree node type is preloaded for you:

// class TreeNode
// {
//     public:
//         TreeNode* left;
//         TreeNode* right;
//         int value;
//     ...
// };

#include <algorithm>
#include <limits.h>

class TreeNode {
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    static int maxSum(TreeNode* root) {
        if (!root) return 0;
        return maxSumHelper(root);
    }

private:
    static int maxSumHelper(TreeNode* node) {
        if (!node) return INT_MIN;

        if (!node->left && !node->right) return node->value;

        int leftMaxSum = maxSumHelper(node->left);
        int rightMaxSum = maxSumHelper(node->right);

        return node->value + std::max(leftMaxSum, rightMaxSum);
    }
};
//
class Solution {
  public:
    static int maxSum(TreeNode* root) {
        if (!root) return 0;
        int left = root->value + maxSum(root->left);
        int right = root->value + maxSum(root->right);
        return std::max(left, right);
    }
};
