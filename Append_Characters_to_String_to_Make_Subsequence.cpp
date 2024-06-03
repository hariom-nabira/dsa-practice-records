class Solution {
public:
    int appendCharacters(string s, string t) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[j]) j++;
        }
        return t.size()-j;
    }
};
// Title: Append Characters to String to Make Subsequence
