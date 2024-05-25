class Solution {
public:
    string compressedString(string word) {
        string ans;
        int i=0, n = word.size();
        while(i < n){
            int count=1;
            char prev = word[i];
            while(i<(n-1) && word[i+1]==prev && count<9){
                count++;
                i++;
            }
            ans += ('0'+ count);
            ans += prev;
            i++;
        }
        return ans;
    }
};
// Title: String Compression III
