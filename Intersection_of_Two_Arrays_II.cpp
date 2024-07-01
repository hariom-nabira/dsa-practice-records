class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> f1,f2;
        for(auto &e:nums1)
            f1[e]++;
        for(auto &e:nums2)
            f2[e]++;
        vector<int> ans;
        for(auto &p : f1){
            int l = min(p.second, f2[p.first]);
            while(l--){
                ans.push_back(p.first);
            }
        }
        return ans;
        
    }
};