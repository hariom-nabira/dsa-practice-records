class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int left=1,right=2,count=2;
        while(right<n){
            if(nums[right]!=nums[left]){
                count++;
                nums[++left]=nums[right++];
            }else{
                if(nums[left-1]!=nums[left]){
                    count++;
                    nums[++left]=nums[right];
                }
                right++;
            }
        }
        cout<<count<<endl;
        return count;
    }
};
// Title: Remove Duplicates from Sorted Array II
