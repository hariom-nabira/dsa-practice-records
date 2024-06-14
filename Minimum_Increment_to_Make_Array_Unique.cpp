class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,ans=0,cnt=0;
        for(int e=0;e<=1e5;e++){
            while(i<n && nums[i]==e){
                cnt++;
                i++;
            }
            cnt = (cnt==0)? 0 : cnt-1;
            ans += cnt;
        }
        return ans;
    }
};