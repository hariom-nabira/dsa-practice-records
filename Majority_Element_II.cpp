class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return {nums[0]};
        vector<int> candidates = {nums[0],nums[1]};
        int count1=1,count2=1;
        for(int i=2;i<n;i++){
            // if(count1==0 && count2==0){
            //     candidates[0]=nums[i];
            //     candidates[1]=nums[i+1];
            // }
            if(count1==0) candidates[0]=nums[i];
            else if(count2==0) candidates[1]=nums[i];
            
            if(nums[i]==candidates[0]) count1++;
            else if(nums[i]==candidates[1]) count2++;
            else{
                count1--;
                count2--;
            }
        }
        if(count1 <= n/3) candidates.erase(candidates.begin()+0);
        if(count2 <= n/3) candidates.erase(candidates.end()-1);
        return candidates;
    }
};
// Title: Majority Element II
