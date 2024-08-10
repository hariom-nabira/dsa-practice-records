class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        vector<vector<int>> adj(n);
        for(auto &edge :edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int ans=0,curr=0;
        unordered_set<int> calledFor;
        helper(adj,curr,ans,calledFor);
        return ans;
    }
    int helper(vector<vector<int>> &adj, int curr,int &ans, unordered_set<int> &calledFor){
        calledFor.insert(curr);
        unordered_set<int> childVals;
        int children = 0;
        for(auto &neighbour : adj[curr]){
            if(calledFor.contains(neighbour)) continue;
            int temp = helper(adj, neighbour, ans, calledFor);
            children += temp;
            childVals.insert(temp);
        }
        if(childVals.size() < 2) ans++;
        return children+1;
    }
};