class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag=false;
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(!flag && s[i]!=' '){
                flag = true;
                count++;
            }
            else if(flag && s[i]!=' ')
                count++;
            else if(s[i]==' ' && flag)
                return count;
        }
        return count;
    }
};
// Title: Length of Last Word
