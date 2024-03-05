class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int left=0, right = n-1;
        char ch;
        while(left<right && s[left]==s[right]){
            ch = s[left];
            while(s[left]==ch && left<=right)
                left++;
            while(s[right]==ch && right>=left)
                right--;
        }
        return right-left+1;
    }
};
// Title: Minimum Length of String After Deleting Similar Ends
