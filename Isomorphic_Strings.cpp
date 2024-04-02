class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_set<char> used;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])){
                if(t[i] != mp[s[i]]){
                    return false;
                }
            }
            else{
                if(used.count(t[i]))
                    return false;
                used.insert(t[i]);
                mp.insert({s[i],t[i]});
            }
        }
        return true;
    }
};