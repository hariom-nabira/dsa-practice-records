class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,int> mp;
        int count=-1;
        for(int i=0;i<strs.size();i++){
            vector<int> freq(26,0);
            for(char  ch:strs[i])
                freq[ch-'a']++;
            if(mp.find(freq) != mp.end()){
                ans[mp[freq]].push_back(strs[i]);
            }else{
                mp[freq] = ++count;
                ans.push_back(vector<string>());
                ans[count].push_back(strs[i]);
            }
        }
        return ans;
    }
};