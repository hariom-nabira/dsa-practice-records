class Solution {
public:
    char kthCharacter(int k) {
        // int changes = ceil(log2(k)) - 1;
        int changes = 0;
        if((k & (k-1)) == 0) changes++;
        if(k==1) changes--;
        // cout<<changes;
        while(k>1){
            k = (k+1) % (int)floor(log2(k));
            changes++;
        }
        return 'a'+changes;
    }
};
// Title: Find the K-th Character in String Game I
