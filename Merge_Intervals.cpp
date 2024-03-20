class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            return a[0]<b[0];
        });
        ans.push_back(intervals[0]);
        int i=1;
        while(i<intervals.size()){
            if(intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
            i++;
        }
        return ans;
    }
};
// Title: Merge Intervals
