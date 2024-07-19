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
    int countPairs(TreeNode* root, int distance) {
        // return helper(root,distance) [11];
        vector<int> ans = helper(root,distance);
        return ans[11];
    }
    // as per the constraints distance<=10 
    // therefore we store number of leafNodes at a dist of 0-10 (at respective indices)
    // and at the 11th indice we store the ans

    vector<int> helper(TreeNode* root, int& distance){
        if(!root) return vector<int>(12);
        if(!root->left && !root->right){
            vector<int> curr(12);
            curr[0] = 1;
            return curr;
        }
        vector<int> left = helper(root->left,distance);
        vector<int> right = helper(root->right,distance);
        vector<int> curr(12);

        for(int d1=0; d1<=10; d1++){
            for(int d2=0;d2<=10;d2++){
                if(2+d1+d2 <= distance){
                    curr[11] += left[d1] * right[d2];
                }
            }
        }

        for(int i=0; i<=9; i++){
            curr[i+1] = left[i] + right[i];
        }
        curr[11] += left[11]+right[11];
        return curr;
    }
};
// Title: Number of Good Leaf Nodes Pairs
