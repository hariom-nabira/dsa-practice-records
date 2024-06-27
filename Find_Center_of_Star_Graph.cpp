class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<int> freq(n+1);
        for(auto edge:edges){
            if(freq[edge[0]]) return edge[0];
            freq[edge[0]]++;
            if(freq[edge[1]]) return edge[1];
            freq[edge[1]]++;
        }
        return -1;
    }
};
// Title: Find Center of Star Graph
