// Sliding Window Approach (from editorial)
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
            while((right-left+1)*target*1LL-currSum > k){ //if total operation is more than k then we need to let go of farthest(i.e left) element
                currSum-=nums[left];
                left++;
            }
            bestLength = max(right-left+1 ,bestLength);
        }
        return bestLength;
    }
};
// Title: Frequency of the Most Frequent Element
