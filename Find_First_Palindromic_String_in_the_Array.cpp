class Solution {
public:
    bool isPalindrome(string str){
        int l=0,r=str.size()-1;
        while(l<=r){
            if(str[l]!=str[r]) return false;
            l++;r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
            if(isPalindrome(words[i])) return words[i];
        return "";
    }
};
// Title: Find First Palindromic String in the Array
