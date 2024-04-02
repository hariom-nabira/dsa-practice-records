class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])){
                if(t[i] != mp[s[i]]){
                    return false;
                }
            }
            else
                mp.insert({s[i],t[i]});
        }
        return true;
    }
};