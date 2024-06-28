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
        helper(root,0);
        return root;
    }
    int helper(TreeNode* root, int parentContri){
        if(!root) return parentContri;
        int rightSubTreeSum = helper(root->right,parentContri);
        root->val = root->val + rightSubTreeSum;
        int leftSubTreeSum = helper(root->left, root->val);
        return leftSubTreeSum;
    }
};