class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int ele : nums) sum+=ele;
        return (n*(n+1))/2 - sum; 
    }
};