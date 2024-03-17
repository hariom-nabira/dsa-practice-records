class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i=0;
        while(intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        int startTime = min(intervals[i][0],newInterval[0]);
        int bookedTill = max(intervals[i][1],newInterval[1]);
        i++;

        while(bookedTill >= intervals[i][0]){
            bookedTill = max(intervals[i][1],bookedTill);
            i++;
        }
        ans.push_back({startTime,bookedTill});
        while(i<intervals.size()){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};