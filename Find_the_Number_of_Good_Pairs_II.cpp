class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans=0;
        sort(nums1.begin(),nums1.end(), greater<int>());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            if(nums1[i] < (nums2[0]*k))
                break;
                int count=1;
            while(i<nums1.size()-1 && nums1[i+1]==nums1[i]){
                count++;
                i++;
            }
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] < (nums2[j]*k))
                    break;
                if(nums1[i] % (nums2[j]*k) ==0) ans+=count;
            }
        }
        return ans;
    }
};