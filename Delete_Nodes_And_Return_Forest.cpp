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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> toDelete(to_delete.begin(), to_delete.end());
        vector<TreeNode*> ans;
        helper(root,ans,toDelete);
        if(!toDelete.contains(root->val)) ans.push_back(root);
        return ans;
    }
    TreeNode* helper(TreeNode* root, vector<TreeNode*>& ans, unordered_set<int> &toDelete){
        if(!root) return nullptr;
        root->left = helper(root->left,ans,toDelete);
        root->right = helper(root->right,ans,toDelete);
        if(toDelete.contains(root->val)){
            if(root->left) ans.push_back(root->left);
            if(root->right) ans.push_back(root->right);
            return nullptr;
        }
        return root;
    }
};