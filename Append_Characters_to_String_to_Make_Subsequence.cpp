class Solution {
public:
    int appendCharacters(string s, string t) {
        int j=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==t[j]) j++;
        }
        return t.size()-j;
    }
};