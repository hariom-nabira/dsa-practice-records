class Solution {
public:
    bool isSubstringPresent(string s) {
        if(s.size()<2) return false;
        set<string> s1,s2;
        for(int i=0;i<s.size()-2;i++){
            s1.insert(s.substr(i,2));
        }
        for(int j=s.size()-1;j>0;j--){
            string str = "";
            str += s[j];
            str += s[j-1];
            s2.insert(str);
        }
        for(auto str:s1)
            if(s2.contains(str))
               return true;
        return false;
    }
};