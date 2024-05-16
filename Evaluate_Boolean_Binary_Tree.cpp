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
    bool evaluateTree(TreeNode* root) {
        if(!root->left)    //since complete binary tree, checking only one child can differ leaf and non-leaf
            return root->val;
        if(root->val&1)   //since options: 2 or 3, therefore checking odd or even
            return evaluateTree(root->left) && evaluateTree(root->right);
        else
            return evaluateTree(root->left) || evaluateTree(root->right);
    }
};