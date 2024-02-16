class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int it:arr) mp[it]++;
        vector<int> v;
        for(auto p:mp) v.push_back(p.second);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(k>=v[i]) k-=v[i];
            else return v.size()-i;
        }
        return 0;
    }
};
// Title: Least Number of Unique Integers after K Removals
