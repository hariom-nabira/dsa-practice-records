class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjacencyList(n);
        vector<vector<int>> ans(n);
        for(auto &edge : edges){
            adjacencyList[edge[0]].push_back(edge[1]);
        }
        for(int i=0;i<n;i++){
            markDecendantsDFS(i,adjacencyList,i,ans);
        }
        return ans;
    }
    void markDecendantsDFS(int ancestor, vector<vector<int>> &adjacencyList, int curr, vector<vector<int>> &ans){
        for(int child : adjacencyList[curr]){
            if(ans[child].empty() || ans[child].back()!=ancestor){
                ans[child].push_back(ancestor);
                markDecendantsDFS(ancestor, adjacencyList, child, ans);
            }
        }
    }
};
// Title: All Ancestors of a Node in a Directed Acyclic Graph
