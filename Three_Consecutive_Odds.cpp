class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]&1){
                count++;
                if(count==3)
                    return true;
            }
            else{
                count=0;
            }
        }
        return false;
    }
};
// Title: Three Consecutive Odds
