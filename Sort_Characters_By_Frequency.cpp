class Solution {
public:
    static bool comp(pair<char,int> &p1,pair<char,int> &p2){
        return p1.second>p2.second;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        string ans="";
        for(char ch:s)
            mp[ch]++;
        vector<pair<char,int>> v;
        for(auto pair:mp)
            v.push_back(pair);
        sort(v.begin(),v.end(),comp);
        for(auto pair:v){
            int c=pair.second;
            char ch=pair.first;
            while(c--)
                ans+=ch;
        }
        return ans;
    }
};