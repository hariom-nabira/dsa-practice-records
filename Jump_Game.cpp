class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0){
            if(nums[i]==0){
                int j=i;
                i--;
                while(i>=0 && nums[i] <= j-i){
                    i--;
                }
                if(i==-1) return false;
            }
            i--;
        }
        return true;
    }
};
// Title: Jump Game
