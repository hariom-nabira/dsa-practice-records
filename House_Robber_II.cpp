class Solution {
public:

    // logic (hint dekh liya)
    // since 1 and n are neighbours we can 

    int rob(vector<int>& nums) {
        vector<int> dp1(nums.size(),-1), dp2(nums.size(),-1);
        int m1 = helper(nums,nums.size()-1,dp2,2);
        int m2 = helper(nums,nums.size()-2,dp1,1);
        return max(m1,m2);
    }
    //choice=1 : houses 1 to n-1
    //choice=2 : houses 2 to n

    int helper(vector<int>& nums,int i,vector<int>& dp,int choice){
        if(choice==1 && i<0) return 0;
        if(choice==2 && i<1) return 0;
        if(i==0 || i==1) return nums[i];
        if(dp[i]==-1)
            dp[i] =  max(nums[i]+helper(nums,i-2,dp,choice) , helper(nums,i-1,dp,choice));
        return dp[i];
    }
};
// Title: House Robber II
