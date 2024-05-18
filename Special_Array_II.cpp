class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> inflectionPoints;
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1])%2==0)
                inflectionPoints.push_back(i);
        }
        vector<bool> ans;
        for(int q=0;q<queries.size();q++){
            if(binarySearchRange(inflectionPoints,queries[q][0],queries[q][1]))
                    ans.push_back(false);
            else
                    ans.push_back(true);
        }
        return ans;
    }
private:
    bool binarySearchRange(vector<int> &points, int left, int right){
        int start=0,end=points.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(left<points[mid] && points[mid]<=right)
                return true;
            else if(points[mid]<=left)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }
};
// Title: Special Array II
