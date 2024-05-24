class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 1);
        for(int k=1;k<ans.size();k++){
            ans[k] = (1LL*ans[k-1]*(rowIndex-k+1))/(k);
        }
        return ans;
    }
};
// Title: Pascal's Triangle II
