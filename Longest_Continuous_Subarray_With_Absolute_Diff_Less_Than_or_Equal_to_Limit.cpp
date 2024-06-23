class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int start=0,end=0, n=nums.size(),ans=INT_MIN;
        multiset<int> set;
        for(;end<n;end++){
            set.insert(nums[end]);
            while(*set.rbegin() - *set.begin() >limit){
                set.extract(nums[start]);
                start++;
            }
            cout<<start<<" "<<end<<"\n";
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};