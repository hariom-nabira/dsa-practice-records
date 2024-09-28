class Solution {
public:
    char kthCharacter(int k) {
        // int changes = ceil(log2(k)) - 1;
        int changes = 0;
        while(k>1){
            k = (k+1) % (int)floor(log2(k));
            changes++;
        }
        return 'a'+changes;
    }
};