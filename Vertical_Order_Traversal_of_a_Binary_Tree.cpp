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
        map<int, vector<pair<int,priority_queue<int, vector<int>, greater<int>>>>> mp; // col: {{depth, pq<val>}, {{depth, pq<val>}, {{depth, pq<val>}, {{depth, pq<val>}}
        queue<pair<TreeNode*, pair<int,int>>> q; // {node, {row,col}}
        q.push({root, {0,0}});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            if(!node) continue;
            if(mp.find(col) == mp.end() || mp[col].back().first < row){
                priority_queue<int, vector<int>, greater<int>> pq;
                pq.push(node->val);
                mp[col].push_back({row,pq});
            }else{ // if(mp[col].back().first == row) //since we are going level order > wali condition aa hi nhi sakti
                mp[col].back().second.push(node->val);
            }
            q.push({node->left, {row+1, col-1}});
            q.push({node->right, {row+1, col+1}});
        }
        vector<vector<int>> ans;
        for(auto col: mp){
            vector<int> temp;
            for(auto rowPQpair: col.second){
                while(!rowPQpair.second.empty()){
                    temp.push_back(rowPQpair.second.top());
                    rowPQpair.second.pop();
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};