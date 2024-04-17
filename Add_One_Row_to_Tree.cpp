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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* t = new TreeNode(val);
            t->left = root;
            return t;
        }
        helper(root,val,depth,1);
        return root;
    }
    void helper(TreeNode* root, int &val, int &depth, int row){
        if(!root) return;
        if(row == depth-1){
            TreeNode* ltemp = root->left;
            TreeNode* rtemp = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = ltemp;
            root->right->right = rtemp;
        }else{
            helper(root->left,val,depth,row+1);
            helper(root->right,val,depth,row+1);
        }
    }
};