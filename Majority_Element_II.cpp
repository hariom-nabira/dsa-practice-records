class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1, cand2, c1=0, c2=0, n=nums.size();
        for(int i=0; i<n; i++){
            if(c1==0) cand1=nums[i];
            else if(c2==0 && nums[i]!=cand1) cand2=nums[i];

            if(nums[i] == cand1) c1++;
            else if(nums[i] == cand2) c2++;
            else{
                c1--;
                c2--;
            }
        }
        c1=0, c2=0;
        for(auto &e : nums){
            if(e==cand1) c1++;
            else if(e==cand2) c2++;
        }

        vector<int> ans;
        if(c1 > n/3) ans.push_back(cand1);
        if(c2 > n/3) ans.push_back(cand2);
        return ans;
    }
};
// Title: Majority Element II
