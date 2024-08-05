class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto str:arr) mp[str]++;
        for(auto str:arr){
            if(mp[str]==1){
                k--;
                if(!k) return str;
            }
        }
        return "";
    }
};
// Title: Kth Distinct String in an Array
