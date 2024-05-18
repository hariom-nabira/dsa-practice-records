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
    int subTreeOffers(TreeNode* root,int &ans){
        if(root==NULL) return 0;
        int leftSubTreeOffer = subTreeOffers(root->left,ans);
        int rightSubTreeOffer = subTreeOffers(root->right,ans);
        ans += abs(leftSubTreeOffer);
        ans += abs(rightSubTreeOffer);
        return root->val + leftSubTreeOffer + rightSubTreeOffer - 1;
    }
public:
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        subTreeOffers(root,ans);
        return ans;
    }
};
// Title: Distribute Coins in Binary Tree
