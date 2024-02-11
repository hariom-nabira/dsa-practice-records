class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fives++;
            }else if(bills[i]==10){
                tens++;
                if(fives==0) return false;
                fives--;
            }else{
                if(fives==0 || (tens==0 && fives<3)) return false;
                tens--;
                fives--;
            }
        }
        return true;
    }
};