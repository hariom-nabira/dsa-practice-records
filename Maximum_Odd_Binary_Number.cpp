class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(char ch:s)
            if(ch=='1') count++;
        string ans(count-1,'1');
        for(int i=0;i<s.size()-count;i++)
            ans.push_back('0');
        ans.push_back('1');
        return ans;
    }
};
// Title: Maximum Odd Binary Number
