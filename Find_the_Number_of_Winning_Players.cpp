class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> v(n,vector<int>(11));
        for(auto &p : pick){
            v[p[0]][p[1]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(v[i][j] > i){
                    ans++;
                    break;
                } 
            }
        }
        return ans;
    }
};