class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                while(i<nums1.size()-1 && nums1[i+1]==nums1[i]) i++;
                while(j<nums2.size()-1 && nums2[j+1]==nums2[j]) j++;
                i++;j++;
            }else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }
};
// Title: Intersection of Two Arrays
