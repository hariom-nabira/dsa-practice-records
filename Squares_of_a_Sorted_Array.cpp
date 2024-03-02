class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left = n-1,right = n;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                ans.push_back(nums[i]*nums[i]);
                left=i-1;
                right=i+1;
                break;
            }
        }
        while(left>=0 && right<n){
            if(-1*nums[left] < nums[right]){
                ans.push_back(nums[left]*nums[left]);
                left--;
            }else{
                ans.push_back(nums[right]*nums[right]);
                right++;
            }
        }
        while(left>=0){
            ans.push_back(nums[left]*nums[left]);
            left--;
        }
        while(right<n){
            ans.push_back(nums[right]*nums[right]);
            right++;
        }
        return ans;
    }
};