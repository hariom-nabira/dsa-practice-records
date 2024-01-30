class Solution {
public:
    int myAtoi(string s) {
        int mul = 10, ans=0;
        bool flag=false;
        for(char ch : s){
            if(ch==' ' && !flag) continue;
            else if(ch=='-' && !flag){
                mul*=-1;
                flag=true;
            }
            else if(ch>='0' && ch<='9'){
                ans = ans*10 + (ch-'0')*10/mul;
                flag=true;
            }else break;
        }
        return ans;
    }
};
// Title: String to Integer (atoi)
