/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int greaterNodesSum=0;
        helper(root,greaterNodesSum);
        return root;
    }
    void helper(TreeNode* root, int& greaterNodesSum){
        if(!root) return;
        helper(root->right, greaterNodesSum);
        greaterNodesSum += root->val;
        root->val = greaterNodesSum;
        helper(root->left, greaterNodesSum);
    }
};
// Title: Binary Search Tree to Greater Sum Tree
