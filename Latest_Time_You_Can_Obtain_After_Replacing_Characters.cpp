class Solution {
public:
    string findLatestTime(string s) {
        for(int i=0;i<5;i++){
            if(s[i]=='?'){
                if(i==0) s[i] = (s[i+1] <='0' || s[i+1]=='?') ? '1' : '0';
                else if(i==1) s[i] = (s[i-1]=='0')? '9' : '1';
                else if(i==3) s[i] = '5';
                else s[i] = '9';
            }
        }
        return s;
    }
};
// Title: Latest Time You Can Obtain After Replacing Characters
