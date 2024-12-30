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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int,int>>> mp; // col: {{val, depth}, {val, depth}, {val, depth}, {val, depth}}
        queue<pair<TreeNode*, pair<int,int>>> q; // {node, {row,col}}
        q.push({root, {0,0}});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            if(!node) continue;
            if(mp.find(col)==mp.end() || mp[col].back().second < row){
                mp[col].push_back({node->val, row});
            }else{ // if(mp[hd].second == depth) //since we are going level order > wali condition aa hi nhi sakti
                auto insertPos = mp[col].end();
                if(mp[col].back().first > node->val){
                    // mp[hd].insert(mp[hd].end()-1, node->val);
                    insertPos--;
                }
                mp[col].insert(insertPos, {node->val, row});
            }
            q.push({node->left, {row+1, col-1}});
            q.push({node->right, {row+1, col+1}});
        }
        vector<vector<int>> ans;
        for(auto p: mp){
            vector<int> temp;
            for(auto e: p.second){
                temp.push_back(e.first);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
// Title: Vertical Order Traversal of a Binary Tree
