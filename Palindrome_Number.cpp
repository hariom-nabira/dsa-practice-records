class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int rev=0,x2=x;
        while(x2!=0){
            if(rev > (INT_MAX-x2%10)/10)
                return false;
            rev = rev*10+ x2%10;
            x2/=10;
        }
        return (rev==x)?true:false;
    }
};