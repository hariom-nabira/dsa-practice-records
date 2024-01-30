class Solution {
public:
    int myAtoi(string s) {
        int mul = 10, ans=0;
        bool flag=false;
        for(char ch : s){
            if(ch==' ' && !flag) continue;
            if(ch=='+' && !flag) flag=true;
            else if(ch=='-' && !flag){
                mul*=-1;
                flag=true;
            }
            else if(ch>='0' && ch<='9'){
                if(ans>0 && ans> (INT_MAX-(ch-'0')*10/mul)/10)
                    return INT_MAX;
                if(ans<0 && ans< (INT_MIN-(ch-'0')*10/mul)/10)
                    return INT_MIN;
                ans = ans*10 + (ch-'0')*10/mul;
                flag=true;
            }else break;
        }
        return ans;
    }
};