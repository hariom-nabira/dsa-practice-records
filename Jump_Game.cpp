class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]==0){
                bool flag = true;
                for(int j=i-1;j>=0;j--){
                    if(nums[j] > i-j){
                        flag=false;
                        i = j;
                        break;
                    }
                }
                if(flag) return false;
            }
        }
        return true;
    }
};