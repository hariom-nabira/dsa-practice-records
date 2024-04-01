//better implementation of same approach

class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = s.size() - 1;
        while(pos >= 0 && s[pos] == ' ') pos--;

        int result = 0;
        while(pos >= 0 && s[pos] != ' ') {
            pos--;
            result++;
        }

        return result;
    }
};