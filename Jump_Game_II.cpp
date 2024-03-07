// dekh ke kiya

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        //first we evaluate the max index we can reach from current index
        //for this we compare the (longest current jump) and (max reachable from last index)
        for(int i=1;i<n-1;i++){
            nums[i] = max(nums[i-1], i+nums[i]);
        }
        //now we start from first box, always jumping to the farthest and counting jumps till we reach n-1 or above
        int jumps=0,i=0;
        while(i<n-1){
            i = nums[i];
            jumps++;
        }
        return jumps;
    }
};