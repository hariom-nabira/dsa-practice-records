class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> f1;
        vector<int> ans;
        for(auto &e:nums1)
            f1[e]++;
        for(auto &e:nums2){
            if(f1[e] > 0){
                ans.push_back(e);
                f1[e]--;
            }
        }
        return ans;
    }
};