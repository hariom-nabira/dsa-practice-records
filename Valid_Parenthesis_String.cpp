class Solution {
public:
    bool checkValidString(string s) {
        int stars=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                count++;
            else if(s[i]==')'){
                if(count) count--;
                else if(stars) stars--;
                else return false;
            }
            else
                stars++;
        }
        if(stars<count)
            return false;
        return true;
    }
};
// Title: Valid Parenthesis String
