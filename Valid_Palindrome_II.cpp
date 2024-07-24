class Solution {
public:
    bool validPalindrome(string s) {
        int left=0, right = s.size()-1, k=1;
        while(left<=right){
            if(s[left]!=s[right]){
                if(helper(s,left,right-1)|| helper(s,left+1,right)){
                    return true;
                }else{
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }
    bool helper(string s,int left, int right){
        while(left<=right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};