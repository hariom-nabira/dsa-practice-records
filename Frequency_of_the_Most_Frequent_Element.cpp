// Sliding Window Approach (from editorial approach 2)
// We take a Sorted Array and a target element from that array, now we want to use at most k increments to maximise freq of target
// since increments, we can only play with elements on left
// Let window be all elements we have taken to be incremented to target
// Total increments = (size of window) * target - Sum of all elements you have taken in Window

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int target,n=nums.size(),left=0,bestLength=0;
        long long currSum=0;
        for(int right=0;right<n;right++){ //we consider each element as target once
            target=nums[right];
            currSum+=nums[right];

            // CATCH - Since we only care about the max length of window and not the actual window
            //         wherever we need to shrink to make window valid we can shrink once and  move to the next element (essentialy making no change to the length of window)

            if(1LL*(right-left+1)*target - currSum > k){ //if total operation is more than k then we need to let go of farthest(i.e left) element
                currSum-=nums[left];
                left++;
            }
        }
        return n-left;
    }
};