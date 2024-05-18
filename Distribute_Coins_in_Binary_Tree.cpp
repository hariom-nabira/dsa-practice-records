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
private:
    int subTreeDemand(TreeNode* root,int &ans){
        if(root==NULL) return 0;
        if(root->left==nullptr && root->right==nullptr) return root->val  1;
        int leftSubTree = subTreeDemand(root->left);
        int rightSubTree = subTreeDemand(root->right);
        
    }
public:
    int distributeCoins(TreeNode* root) {
        
    }
};
// Title: Distribute Coins in Binary Tree
