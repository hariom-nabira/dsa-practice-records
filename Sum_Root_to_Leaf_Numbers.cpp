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
    int sumNumbers(TreeNode* root) {
        return helper(root,0);
    }
    int helper(TreeNode* root, int parentVal){
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return parentVal+root->val;
        parentVal += root->val;
        return helper(root->left, parentVal*10) + helper(root->right, parentVal*10);
    }
};
// Title: Sum Root to Leaf Numbers
