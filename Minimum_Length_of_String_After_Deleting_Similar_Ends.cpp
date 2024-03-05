class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int left=0, right = n-1, tempIndex;
        while(left<=right){
            if(s[left]!=s[right])
                return right-left+1;
            tempIndex=left;
            while(s[tempIndex]==s[left] && tempIndex < n-1)
                tempIndex++;
            left=tempIndex;
            tempIndex=right;
            while(s[tempIndex]==s[right] && tempIndex > 0)
                tempIndex--;
            right=tempIndex;
        }
        return 0;
    }
};
// Title: Minimum Length of String After Deleting Similar Ends
