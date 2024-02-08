class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,v=0,t=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0) z++;
            else if(nums[i]==1) v++;
            else t++;
        int i=0;
        while(z--) nums[i++]=0;
        while(v--) nums[i++]=1;
        while(t--) nums[i++]=2;
    }
};
// Title: Sort Colors
