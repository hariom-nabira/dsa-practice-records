class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string strcopy = s;
            sort(strcopy.begin(),strcopy.end());
            mp[strcopy].push_back(s);
        }
        for(auto pair : mp)
            ans.push_back(pair.second);
        return ans;
    }
};
// Title: Group Anagrams
