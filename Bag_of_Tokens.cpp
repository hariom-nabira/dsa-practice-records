class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0,left=0,right=tokens.size()-1,maxScore = 0;
        while(left<=right){
            if(tokens[left] > power){
                power+=tokens[right];
                score--;
                right--;
            }else{
                power-=tokens[left];
                score++;
                left++;
            }
            maxScore = max(maxScore,score);
        }
        return maxScore;
    }
};