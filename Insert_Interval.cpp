class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        if(n==0) return {newInterval};
        vector<vector<int>> ans;
        int i=0;
        while(i<n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        if(i == n){
            ans.push_back(newInterval);
            return ans;
        }
        int startTime = min(intervals[i][0],newInterval[0]);
        int bookedTill = max(intervals[i][1],newInterval[1]);
        i++;

        while(i<n && bookedTill >= intervals[i][0]){
            bookedTill = max(intervals[i][1],bookedTill);
            i++;
        }
        ans.push_back({startTime,bookedTill});
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};