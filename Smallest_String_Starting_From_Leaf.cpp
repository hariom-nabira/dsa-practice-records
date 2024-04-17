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
    string smallestFromLeaf(TreeNode* root) {
        return helper(root,"");
    }
    string helper(TreeNode* root, string soFar){
        if(root->left==NULL && root->right==NULL){
            reverse(soFar.begin(),soFar.end());
            return (char)('a'+root->val) + soFar;
        }
        string l, r;
        if(root->left) l = helper(root->left, soFar+(char)('a'+root->val));
        if(root->right) r = helper(root->right, soFar+(char)('a'+root->val));
        
        if(l!="" && r!="")
            return min(l,r);
        else if(l!="")
            return l;
        else
            return r;
    }
};
// Title: Smallest String Starting From Leaf
