class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long s=0;
        for(int it:nums) s+=it;
        for(int i=nums.size()-1;i>=0;i--){
            if((s-nums[i]) > nums[i])
                return s;
            s-=nums[i];
        }
        return -1;
    }
};
// Title: Find Polygon With the Largest Perimeter
